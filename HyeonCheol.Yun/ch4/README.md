# 04장 프로세스

## 프로세스 생성

프로세스의 생성은 크게 유저 레벨에서 생성되는 유저 프로세스와  커널에 의해 커널 레벨에서 생성되는 커널 프로세스, 이렇게 두 가지로 구분할 수 있다.

- 유저 프로세스의 경우 커널로 fork 시스템콜을 이용해 커널에 프로세스 생성을 요청하는 방식으로 프로세스를 생성한다.
- 커널 프로세스는 커널 내부의 `kthread_create()` 함수를 호출해 생성한다.

### 유저 레벨 프로세스 생성

#### sys_clone()

유저 레벨 프로세스가 fork()를 이용해 시스템콜을 호출하면, 커널 레벨로 진입해 sys_clone()이 시작된다.
그리고 sys_clone() 은 _do_fork()를 호출하여 프로세스 생성을 시작한다.

```c
// kernel/fork.c
2290 #ifdef __ARCH_WANT_SYS_CLONE
2291 #ifdef CONFIG_CLONE_BACKWARDS
2292 SYSCALL_DEFINE5(clone, unsigned long, clone_flags, unsigned long, newsp,
2293          int __user *, parent_tidptr,
2294          unsigned long, tls,
2295          int __user *, child_tidptr)
2296 #elif defined(CONFIG_CLONE_BACKWARDS2)
2297 SYSCALL_DEFINE5(clone, unsigned long, newsp, unsigned long, clone_flags,
2298          int __user *, parent_tidptr,
2299          int __user *, child_tidptr,
2300          unsigned long, tls)
2301 #elif defined(CONFIG_CLONE_BACKWARDS3)
2302 SYSCALL_DEFINE6(clone, unsigned long, clone_flags, unsigned long, newsp,
2303         int, stack_size,
2304         int __user *, parent_tidptr,
2305         int __user *, child_tidptr,
2306         unsigned long, tls)
2307 #else
2308 SYSCALL_DEFINE5(clone, unsigned long, clone_flags, unsigned long, newsp,
2309          int __user *, parent_tidptr,
2310          int __user *, child_tidptr,
2311          unsigned long, tls)
2312 #endif
2313 {  // 시그니쳐는 매크로로 여러 아키텍처별로 다르게 정의되지만, 실제 하는 일은 _do_fork() 의 호출이다.
2314     return _do_fork(clone_flags, newsp, 0, parent_tidptr, child_tidptr, tls);
2315 }
2316 #endif
```

#### _do_fork()

```c
// kernel/fork.c
2176 long _do_fork(unsigned long clone_flags,
2177           unsigned long stack_start,
2178           unsigned long stack_size,
2179           int __user *parent_tidptr,
2180           int __user *child_tidptr,
2181           unsigned long tls)
2182 {
2183     struct completion vfork;
2184     struct pid *pid;
2185     struct task_struct *p;
2186     int trace = 0;
2187     long nr;
... 
...      // 부모 프로세스의 정보를 이용해 자식 프로세스를 복사한다. p 는 태스크 디스크립터
...      // copy_process 는 kernel/fork.c 내에 위치
2207     p = copy_process(clone_flags, stack_start, stack_size,
2208              child_tidptr, NULL, trace, tls, NUMA_NO_NODE);
2232     wake_up_new_task(p);   // 새로운 프로세스를 깨운다.
...
2243     put_pid(pid);
2244     return nr;
2245 }
```

#### wake_up_new_task()

```c
// kernel/sched/core.c
2395 void wake_up_new_task(struct task_struct *p)
2396 {
2397     struct rq_flags rf;
2398     struct rq *rq;
2399
2400     raw_spin_lock_irqsave(&p->pi_lock, rf.flags);
2401     p->state = TASK_RUNNING;
2402 #ifdef CONFIG_SMP
...
...      // SMP 이므로 새로 생성된 프로세스가 동작할 CPU 코어를 지정하고, 관련 runqueue 를 이용해 프로세스를 깨운다.
2411     p->recent_used_cpu = task_cpu(p);
2412     __set_task_cpu(p, select_task_rq(p, task_cpu(p), SD_BALANCE_FORK, 0));
2413 #endif
2414     rq = __task_rq_lock(p, &rf);
2415     update_rq_clock(rq);
2416     post_init_entity_util_avg(&p->se);
...
...      // runqueue 에 프로세스를 등록한다. 다음번 스케쥴링때 runqueue 에서 next 를 뽑아 실행하게 된다.
2418     activate_task(rq, p, ENQUEUE_NOCLOCK);
2419     p->on_rq = TASK_ON_RQ_QUEUED;
2420     trace_sched_wakeup_new(p);
2421     check_preempt_curr(rq, p, WF_FORK);
2422 #ifdef CONFIG_SMP
2423     if (p->sched_class->task_woken) {
...
2428         rq_unpin_lock(rq, &rf);
2429         p->sched_class->task_woken(rq, p);
2430         rq_repin_lock(rq, &rf);
2431     }
2432 #endif
2433     task_rq_unlock(rq, p, &rf);
2434 }
```

### 커널 레벨 프로세스 생성

커널 레벨의 프로세스 역시 결국은 `_do_fork()` 를 호출하여 프로세스를 생성한다. 하지만 유저 레벨 프로세스와 _do_fork() 까지의 진입 경로가 다소 다르다.

크게 두 가지 스텝으로 구성된다.

1. 커널 스레드 생성 요청
2. kthreadd 가 생성 요청을 읽어 커널 스레드를 생성

커널 스레드 생성 요청은 `kthread_create()`으로부터 시작된다.

#### 커널 스레드 생성 요청: kthread_create() / kthread_create_on_node()

```c
// include/linux/kthread.h
10 struct task_struct *kthread_create_on_node(int (*threadfn)(void *data),
11                        void *data,
12                        int node,
13                        const char namefmt[], ...);
...
... // kthread_create() 은 kthread_create_on_node() 이고, kthread_create_on_node() 는
... // 가변 인자들만 적절하게 처리하고 __kthread_create_on_node() 한테 처리를 위임한다.
26 #define kthread_create(threadfn, data, namefmt, arg...) \
27     kthread_create_on_node(threadfn, data, NUMA_NO_NODE, namefmt, ##arg)

// kernel/kthread.c
 284 struct task_struct *__kthread_create_on_node(int (*threadfn)(void *data),
 285                             void *data, int node,
 286                             const char namefmt[],
 287                             va_list args)
 288 {
 289     DECLARE_COMPLETION_ONSTACK(done);
 290     struct task_struct *task;
 291     struct kthread_create_info *create = kmalloc(sizeof(*create),
 292                              GFP_KERNEL);
 ...
 ...     // 커널 스레드가 하는 일은 결국 threadfn (스레드 핸들러 함수)을 호출/수행하는 것이다.
 296     create->threadfn = threadfn;
 297     create->data = data;
 298     create->node = node;
 299     create->done = &done;
 300
 301     spin_lock(&kthread_create_lock);
 ...     // kthread_create_list 에 새로 생성된 커널 스레드를 추가한다.
 ...     // list_and_tail 은 커널 내에서 사용하는 리스트 매크로이며, create 이 필요할 때는 create->list 로부터 오프셋을 계산해 create 자체를 구한다.
 302     list_add_tail(&create->list, &kthread_create_list);
 303     spin_unlock(&kthread_create_lock);
 304
 ...     // kthreadd 프로세스를 깨워 커널 스레드의 생성을 수행한다.
 305     wake_up_process(kthreadd_task);
 ...
 325     task = create->result;
 ...
 343     kfree(create);
 344     return task;
 345 }
```

### kthreadd 가 생성 요청을 읽어 커널 스레드를 생성: kthreadd() / create_kthread()

커널 스레드를 생성하는 주체는 kthreadd 라는 커널 프로세스이며, 이 프로세스도 결국 유저 레벨 프로세스의 생성때처럼 `_do_fork()` 커널 함수를 호출하여 프로세스를 생성한다.

kthreadd 프로세스는 `kthreadd()` 스레드 핸들러 함수 수행하는 프로세스이다.

```c
kernel/kthread.c
 559 int kthreadd(void *unused)
 560 {
 561     struct task_struct *tsk = current;
 562
 563     /* Setup a clean context for our children to inherit. */
 564     set_task_comm(tsk, "kthreadd");
 565     ignore_signals(tsk);
 566     set_cpus_allowed_ptr(tsk, cpu_all_mask);
 567     set_mems_allowed(node_states[N_MEMORY]);
 568
 569     current->flags |= PF_NOFREEZE;
 570     cgroup_init_kthreadd();
 571
 ...     // 이 윗쪽 코드는 kthreadd가 생성되는 시점(부팅시점)에 수행된 코드이고, 그 이후부터는 아래 루프를 돌며 서비스를 수행한다.
 572     for (;;) {
 573         set_current_state(TASK_INTERRUPTIBLE);
 ...         // kthreadd 는 kthread_create_list 가 비어있으면 schedule()을 호출하여 다른 프로세스로 제어를 넘긴다.
 574         if (list_empty(&kthread_create_list))
 575             schedule();
 ...         // 만일 kthread_create_list 가 비어있지 않으면 여기서부터 수행된다.
 576         __set_current_state(TASK_RUNNING);
 577
 578         spin_lock(&kthread_create_lock);
 579         while (!list_empty(&kthread_create_list)) {
 580             struct kthread_create_info *create;
 581
 582             create = list_entry(kthread_create_list.next,
 583                         struct kthread_create_info, list);
 584             list_del_init(&create->list);
 585             spin_unlock(&kthread_create_lock);
 586
 ...             // 요청 받은 커널 스레드 생성
 587             create_kthread(create);
 588
 589             spin_lock(&kthread_create_lock);
 590         }
 591         spin_unlock(&kthread_create_lock);
 592     }
 593
 594     return 0;
 595 }
 ...
 261 static void create_kthread(struct kthread_create_info *create)
 262 {
 263     int pid;
 ...
 ...     // kernel_thread() 호출해 전달받은 
 269     pid = kernel_thread(kthread, create, CLONE_FS | CLONE_FILES | SIGCHLD);
 ...
 281 }

// kernel/fork.c
// kernel_thread 는 단지 _do_fork 를 호출 할 뿐이다.
2264 pid_t kernel_thread(int (*fn)(void *), void *arg, unsigned long flags)
2265 {
2266     return _do_fork(flags|CLONE_VM|CLONE_UNTRACED, (unsigned long)fn,
2267         (unsigned long)arg, NULL, NULL, 0);
2268 }
```


---

## 프로세스 종료


---

## 유저 레벨 프로세스 실행 실습

```bash
# bash (pid=1437)이 raspbian_proc 을 fork 한다.
# fork() 함수는 시스템콜을 유발하고 커널은 대응하는 핸들러인 sys_clone() 을 호출한다.
            bash-1437  [003] ....  6246.926151: sys_clone+0x14/0x3c <-ret_fast_syscall+0x0/0x28
            bash-1437  [003] ....  6246.926172: <stack trace>
 => sys_clone+0x18/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0xbed88780
            bash-1437  [003] ....  6246.926175: _do_fork+0x14/0x438 <-sys_clone+0x34/0x3c
            bash-1437  [003] ....  6246.926185: <stack trace>
 => _do_fork+0x18/0x438
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0xbed88780
            bash-1437  [003] ....  6246.926187: copy_process.part.5+0x14/0x1ad4 <-_do_fork+0xd8/0x438
            bash-1437  [003] ....  6246.926198: <stack trace>
 => copy_process.part.5+0x18/0x1ad4
 => _do_fork+0xd8/0x438
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0xbed88780
# bash (pid=1437) 이 생성한 자식 프로세스는 bash (pid=1617) 이 된다.
#   프로세스는 자식 프로세스를 생성할 때, 자기 자신을 복사하므로 raspbian_proc 가 아니라 bash 프로세스가 생성
            bash-1437  [003] ....  6246.926795: sched_process_fork: comm=bash pid=1437 child_comm=bash child_pid=1617
# bash (pid=1617) 는 부모 프로세스와 다른 cpu 코어인 1번 코어에 스케쥴링 된다.
          <idle>-0     [001] d...  6246.926827: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1617 next_prio=120
            bash-1437  [003] d...  6246.927539: sched_switch: prev_comm=bash prev_pid=1437 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
# bash (pid=1617) 은 raspbian_proc (pid=1617) 이 되어 동작을 시작함
   raspbian_proc-1617  [001] dns.  6246.928044: sched_wakeup: comm=kworker/1:2 pid=143 prio=120 target_cpu=001
          <idle>-0     [002] dnh.  6246.928100: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
   raspbian_proc-1617  [001] d...  6246.928108: sched_switch: prev_comm=bash prev_pid=1617 prev_prio=120 prev_state=R ==> next_comm=kworker/1:2 next_pid=143 next_prio=120
          <idle>-0     [002] d...  6246.928117: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
     kworker/1:2-143   [001] d...  6246.928141: sched_switch: prev_comm=kworker/1:2 prev_pid=143 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1617 next_prio=120
       rcu_sched-10    [002] d...  6246.928217: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
# 이후에는 종료 전까지 sleep() 을 반복한다.
   raspbian_proc-1617  [001] dn..  6246.931836: sched_wakeup: comm=kworker/u8:2 pid=124 prio=120 target_cpu=001
   raspbian_proc-1617  [001] d...  6246.931851: sched_switch: prev_comm=raspbian_proc prev_pid=1617 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:2 next_pid=124 next_prio=120
    kworker/u8:2-124   [001] d...  6246.931878: sched_switch: prev_comm=kworker/u8:2 prev_pid=124 prev_prio=120 prev_state=I ==> next_comm=raspbian_proc next_pid=1617 next_prio=120
          <idle>-0     [000] dnh.  6246.931882: sched_wakeup: comm=sshd pid=1434 prio=120 target_cpu=000
   raspbian_proc-1617  [001] dn..  6246.931888: sched_wakeup: comm=kworker/u8:2 pid=124 prio=120 target_cpu=001
   raspbian_proc-1617  [001] d...  6246.931900: sched_switch: prev_comm=raspbian_proc prev_pid=1617 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=124 next_prio=120
          <idle>-0     [000] d...  6246.931902: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1434 next_prio=120
    kworker/u8:2-124   [001] d...  6246.931915: sched_switch: prev_comm=kworker/u8:2 prev_pid=124 prev_prio=120 prev_state=I ==> next_comm=raspbian_proc next_pid=1617 next_prio=120
   raspbian_proc-1617  [001] d...  6246.932018: sched_switch: prev_comm=raspbian_proc prev_pid=1617 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
    ...
          <idle>-0     [001] d...  6249.932099: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=raspbian_proc next_pid=1617 next_prio=120
   raspbian_proc-1617  [001] dn..  6249.932128: sched_wakeup: comm=kworker/u8:2 pid=124 prio=120 target_cpu=001
   raspbian_proc-1617  [001] d...  6249.932138: sched_switch: prev_comm=raspbian_proc prev_pid=1617 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:2 next_pid=124 next_prio=120
    kworker/u8:2-124   [001] d...  6249.932159: sched_switch: prev_comm=kworker/u8:2 prev_pid=124 prev_prio=120 prev_state=I ==> next_comm=raspbian_proc next_pid=1617 next_prio=120
          <idle>-0     [000] dnh.  6249.932160: sched_wakeup: comm=sshd pid=1434 prio=120 target_cpu=000
   raspbian_proc-1617  [001] dn..  6249.932168: sched_wakeup: comm=kworker/u8:2 pid=124 prio=120 target_cpu=001
          <idle>-0     [000] d...  6249.932175: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1434 next_prio=120
   raspbian_proc-1617  [001] d...  6249.932180: sched_switch: prev_comm=raspbian_proc prev_pid=1617 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=124 next_prio=120
    kworker/u8:2-124   [001] d...  6249.932194: sched_switch: prev_comm=kworker/u8:2 prev_pid=124 prev_prio=120 prev_state=I ==> next_comm=raspbian_proc next_pid=1617 next_prio=120
   raspbian_proc-1617  [001] d...  6249.932265: sched_switch: prev_comm=raspbian_proc prev_pid=1617 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
   ...
            bash-1465  [001] d...  6264.582233: sched_wakeup: comm=raspbian_proc pid=1617 prio=120 target_cpu=001
# bash (pid=1465) 가 pid=1617 로 signal=9 (SIGKILL) 를 보낸다.
            bash-1465  [001] d...  6264.582237: signal_generate: sig=9 errno=0 code=0 comm=raspbian_proc pid=1617 grp=1 res=0
            bash-1465  [001] dn..  6264.582918: sched_wakeup: comm=kworker/u8:2 pid=124 prio=120 target_cpu=001
            bash-1465  [001] d...  6264.582933: sched_switch: prev_comm=bash prev_pid=1465 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=124 next_prio=120
          <idle>-0     [000] dnh.  6264.582953: sched_wakeup: comm=sshd pid=1462 prio=120 target_cpu=000
    kworker/u8:2-124   [001] d...  6264.582954: sched_switch: prev_comm=kworker/u8:2 prev_pid=124 prev_prio=120 prev_state=I ==> next_comm=raspbian_proc next_pid=1617 next_prio=120
          <idle>-0     [000] d...  6264.582963: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1462 next_prio=120
# pid=1617 은 signal을 받고 시그널 핸들링을 수행한다. -> do_exit()
   raspbian_proc-1617  [001] d...  6264.582966: signal_deliver: sig=9 errno=0 code=0 sa_handler=0 sa_flags=0
# raspbian_proc (pid=1617)은 do_exit() 를 실행한다.
   raspbian_proc-1617  [001] ....  6264.582970: do_exit+0x14/0xc18 <-do_group_exit+0x4c/0xe4
   raspbian_proc-1617  [001] ....  6264.582993: <stack trace>
 => do_exit+0x18/0xc18
 => do_group_exit+0x4c/0xe4
 => get_signal+0x1a4/0x8cc
 => do_signal+0x364/0x474
 => do_work_pending+0xdc/0xf4
 => slow_work_pending+0xc/0x20
 => 0xb6e9e69c
            sshd-1462  [000] d...  6264.583158: sched_switch: prev_comm=sshd prev_pid=1462 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
   raspbian_proc-1617  [001] ....  6264.583304: sched_process_exit: comm=raspbian_proc pid=1617 prio=120
# raspbian_proc (pid=1617) 은 종료하며 자신의 부모인 bash (pid=1437) 에게 signal=17 (SIGCHLD) 을 보낸다.
   raspbian_proc-1617  [001] d...  6264.583368: signal_generate: sig=17 errno=0 code=2 comm=bash pid=1437 grp=1 res=0
          <idle>-0     [003] dnh.  6264.583383: sched_wakeup: comm=bash pid=1437 prio=120 target_cpu=003
   raspbian_proc-1617  [001] d...  6264.583384: sched_switch: prev_comm=raspbian_proc prev_pid=1617 prev_prio=120 prev_state=Z ==> next_comm=bash next_pid=1465 next_prio=120
          <idle>-0     [003] d...  6264.583397: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1437 next_prio=120
            bash-1465  [001] d...  6264.583453: sched_switch: prev_comm=bash prev_pid=1465 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6264.583728: sched_wakeup: comm=kworker/u8:2 pid=124 prio=120 target_cpu=001
          <idle>-0     [001] d...  6264.583737: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=124 next_prio=120
# 자식이 보낸 시그널을 부모가 받게 됨.
            bash-1437  [003] d...  6264.583750: signal_deliver: sig=17 errno=0 code=2 sa_handler=55a6c sa_flags=14000000
```

```bash
          <idle>-0     [002] dnh.  6215.066688: sched_wakeup: comm=rpi_proc_exit pid=1168 prio=120 target_cpu=002
          <idle>-0     [002] dnh.  6215.066699: sched_wakeup: comm=kworker/2:1 pid=969 prio=120 target_cpu=002
          <idle>-0     [002] d...  6215.066714: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=969 next_prio=120
     kworker/2:1-969   [002] d...  6215.066730: sched_switch: prev_comm=kworker/2:1 prev_pid=969 prev_prio=120 prev_state=I ==> next_comm=rpi_proc_exit next_pid=1168 next_prio=120
# 위에서 시그널을 받고 종료된 프로세스와 마찬가지로, exit() 으로 종료된 프로세스도 rpi_proc_exit (pid=1168)은 do_exit() 를 실행한다.
   rpi_proc_exit-1168  [002] ....  6215.066849: do_exit+0x14/0xc18 <-do_group_exit+0x4c/0xe4
   rpi_proc_exit-1168  [002] ....  6215.066870: <stack trace>
 => do_exit+0x18/0xc18
 => do_group_exit+0x4c/0xe4
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0xbeb07468
   rpi_proc_exit-1168  [002] ....  6215.067159: sched_process_exit: comm=rpi_proc_exit pid=1168 prio=120
# 마찬가지로 부모 프로세스에게 signal=17 을 보낸다.
   rpi_proc_exit-1168  [002] d...  6215.067224: signal_generate: sig=17 errno=0 code=1 comm=bash pid=911 grp=1 res=0
          <idle>-0     [001] dnh.  6215.067242: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=001
          <idle>-0     [001] d...  6215.067259: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
   rpi_proc_exit-1168  [002] d...  6215.067273: sched_switch: prev_comm=rpi_proc_exit prev_pid=1168 prev_prio=120 prev_state=X ==> next_comm=swapper/2 next_pid=0 next_prio=120
            bash-911   [001] d...  6215.067442: signal_deliver: sig=17 errno=0 code=1 sa_handler=55a6c sa_flags=14000000
```