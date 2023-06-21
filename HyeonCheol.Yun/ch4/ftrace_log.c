# tracer: function
#
# entries-in-buffer/entries-written: 2015/2015   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
          <idle>-0     [001] dnh.  6509.970090: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6509.970109: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6509.970131: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6509.970133: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6509.970151: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            bash-1255  [003] ....  6509.970243: do_exit+0x14/0xc18 <-do_group_exit+0x4c/0xe4
            bash-1255  [003] ....  6509.970266: <stack trace>
 => do_exit+0x18/0xc18
 => do_group_exit+0x4c/0xe4
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0xbef834c8
            sshd-908   [000] d...  6509.970342: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
            bash-1255  [003] ....  6509.970975: sched_process_exit: comm=bash pid=1255 prio=120
            bash-1255  [003] d...  6509.971058: signal_generate: sig=17 errno=0 code=1 comm=sudo pid=1250 grp=1 res=0
          <idle>-0     [000] dnh.  6509.971066: sched_wakeup: comm=sudo pid=1250 prio=120 target_cpu=000
            bash-1255  [003] d...  6509.971069: sched_switch: prev_comm=bash prev_pid=1255 prev_prio=120 prev_state=Z ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6509.971128: sched_wakeup: comm=ksoftirqd/0 pid=9 prio=120 target_cpu=000
          <idle>-0     [000] d...  6509.971144: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...  6509.971160: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=sudo next_pid=1250 next_prio=120
            sudo-1250  [000] d...  6509.971177: signal_deliver: sig=17 errno=0 code=1 sa_handler=b6eb000c sa_flags=14000004
          <idle>-0     [003] dnh.  6509.972008: sched_wakeup: comm=systemd-journal pid=110 prio=120 target_cpu=003
          <idle>-0     [003] d...  6509.972019: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=110 next_prio=120
          <idle>-0     [001] dnh.  6509.972034: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6509.972046: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] ....  6509.972054: _do_fork+0x14/0x438 <-kernel_thread+0x40/0x48
    kworker/u8:2-119   [001] ....  6509.972078: <stack trace>
 => _do_fork+0x18/0x438
 => kernel_thread+0x40/0x48
 => call_usermodehelper_exec_work+0x8c/0xe8
 => process_one_work+0x170/0x458
 => worker_thread+0x5c/0x5a4
 => kthread+0x138/0x168
 => ret_from_fork+0x14/0x28
 => 0
    kworker/u8:2-119   [001] ....  6509.972080: copy_process.part.5+0x14/0x1ad4 <-_do_fork+0xd8/0x438
    kworker/u8:2-119   [001] ....  6509.972095: <stack trace>
 => copy_process.part.5+0x18/0x1ad4
 => _do_fork+0xd8/0x438
 => kernel_thread+0x40/0x48
 => call_usermodehelper_exec_work+0x8c/0xe8
 => process_one_work+0x170/0x458
 => worker_thread+0x5c/0x5a4
 => kthread+0x138/0x168
 => ret_from_fork+0x14/0x28
 => 0
            sudo-1250  [000] d...  6509.972114: sched_switch: prev_comm=sudo prev_pid=1250 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] ....  6509.972170: sched_process_fork: comm=kworker/u8:2 pid=119 child_comm=kworker/u8:2 child_pid=1264
    kworker/u8:2-119   [001] d...  6509.972217: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=1264 next_prio=120
 systemd-journal-110   [003] d...  6509.973561: sched_wakeup: comm=in:imuxsock pid=428 prio=120 target_cpu=003
 systemd-journal-110   [003] d...  6509.974140: sched_switch: prev_comm=systemd-journal prev_pid=110 prev_prio=120 prev_state=S ==> next_comm=in:imuxsock next_pid=428 next_prio=120
     in:imuxsock-428   [003] d...  6509.974264: sched_wakeup: comm=rs:main Q:Reg pid=430 prio=120 target_cpu=003
     in:imuxsock-428   [003] d...  6509.974286: sched_switch: prev_comm=in:imuxsock prev_pid=428 prev_prio=120 prev_state=S ==> next_comm=rs:main Q:Reg next_pid=430 next_prio=120
   rs:main Q:Reg-430   [003] d...  6509.974464: sched_switch: prev_comm=rs:main Q:Reg prev_pid=430 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6509.979923: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6509.979980: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6509.980000: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
        modprobe-1264  [001] ....  6509.982552: do_exit+0x14/0xc18 <-do_group_exit+0x4c/0xe4
        modprobe-1264  [001] ....  6509.982574: <stack trace>
 => do_exit+0x18/0xc18
 => do_group_exit+0x4c/0xe4
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0xbea6dd38
        modprobe-1264  [001] ....  6509.983114: sched_process_exit: comm=modprobe pid=1264 prio=120
        modprobe-1264  [001] d...  6509.983173: signal_generate: sig=17 errno=0 code=1 comm=kworker/u8:2 pid=119 grp=1 res=1
        modprobe-1264  [001] dn..  6509.983187: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
        modprobe-1264  [001] d...  6509.983198: sched_switch: prev_comm=modprobe prev_pid=1264 prev_prio=120 prev_state=Z ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
          <idle>-0     [000] dnh.  6509.983284: sched_wakeup: comm=sudo pid=1250 prio=120 target_cpu=000
          <idle>-0     [000] d...  6509.983296: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sudo next_pid=1250 next_prio=120
    kworker/u8:2-119   [001] d...  6509.983309: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6509.983619: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
            sudo-1250  [000] d...  6509.983623: sched_switch: prev_comm=sudo prev_pid=1250 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...  6509.983628: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] ....  6509.983635: _do_fork+0x14/0x438 <-kernel_thread+0x40/0x48
    kworker/u8:2-119   [001] ....  6509.983653: <stack trace>
 => _do_fork+0x18/0x438
 => kernel_thread+0x40/0x48
 => call_usermodehelper_exec_work+0x8c/0xe8
 => process_one_work+0x170/0x458
 => worker_thread+0x5c/0x5a4
 => kthread+0x138/0x168
 => ret_from_fork+0x14/0x28
 => 0
    kworker/u8:2-119   [001] ....  6509.983656: copy_process.part.5+0x14/0x1ad4 <-_do_fork+0xd8/0x438
    kworker/u8:2-119   [001] ....  6509.983670: <stack trace>
 => copy_process.part.5+0x18/0x1ad4
 => _do_fork+0xd8/0x438
 => kernel_thread+0x40/0x48
 => call_usermodehelper_exec_work+0x8c/0xe8
 => process_one_work+0x170/0x458
 => worker_thread+0x5c/0x5a4
 => kthread+0x138/0x168
 => ret_from_fork+0x14/0x28
 => 0
    kworker/u8:2-119   [001] ....  6509.983733: sched_process_fork: comm=kworker/u8:2 pid=119 child_comm=kworker/u8:2 child_pid=1265
    kworker/u8:2-119   [001] d...  6509.983754: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] d...  6509.983764: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1265 next_prio=120
        modprobe-1265  [002] dnh.  6509.989969: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
        modprobe-1265  [002] d...  6509.989982: sched_switch: prev_comm=modprobe prev_pid=1265 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6509.990012: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=modprobe next_pid=1265 next_prio=120
        modprobe-1265  [002] ....  6509.994169: do_exit+0x14/0xc18 <-do_group_exit+0x4c/0xe4
        modprobe-1265  [002] ....  6509.994191: <stack trace>
 => do_exit+0x18/0xc18
 => do_group_exit+0x4c/0xe4
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0xbefe6d38
        modprobe-1265  [002] ....  6509.994755: sched_process_exit: comm=modprobe pid=1265 prio=120
        modprobe-1265  [002] d...  6509.994816: signal_generate: sig=17 errno=0 code=1 comm=kworker/u8:2 pid=119 grp=1 res=1
          <idle>-0     [001] dnh.  6509.994836: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6509.994849: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
        modprobe-1265  [002] d...  6509.994860: sched_switch: prev_comm=modprobe prev_pid=1265 prev_prio=120 prev_state=X ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6509.994930: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6509.994932: sched_wakeup: comm=sudo pid=1250 prio=120 target_cpu=000
          <idle>-0     [000] d...  6509.994942: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sudo next_pid=1250 next_prio=120
          <idle>-0     [001] dnh.  6509.994992: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
            sudo-1250  [000] d...  6509.994996: sched_switch: prev_comm=sudo prev_pid=1250 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...  6509.995000: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] ....  6509.995007: _do_fork+0x14/0x438 <-kernel_thread+0x40/0x48
    kworker/u8:2-119   [001] ....  6509.995023: <stack trace>
 => _do_fork+0x18/0x438
 => kernel_thread+0x40/0x48
 => call_usermodehelper_exec_work+0x8c/0xe8
 => process_one_work+0x170/0x458
 => worker_thread+0x5c/0x5a4
 => kthread+0x138/0x168
 => ret_from_fork+0x14/0x28
 => 0
    kworker/u8:2-119   [001] ....  6509.995026: copy_process.part.5+0x14/0x1ad4 <-_do_fork+0xd8/0x438
    kworker/u8:2-119   [001] ....  6509.995038: <stack trace>
 => copy_process.part.5+0x18/0x1ad4
 => _do_fork+0xd8/0x438
 => kernel_thread+0x40/0x48
 => call_usermodehelper_exec_work+0x8c/0xe8
 => process_one_work+0x170/0x458
 => worker_thread+0x5c/0x5a4
 => kthread+0x138/0x168
 => ret_from_fork+0x14/0x28
 => 0
    kworker/u8:2-119   [001] ....  6509.995098: sched_process_fork: comm=kworker/u8:2 pid=119 child_comm=kworker/u8:2 child_pid=1266
    kworker/u8:2-119   [001] d...  6509.995118: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=1266 next_prio=120
          <idle>-0     [003] dns.  6509.999927: sched_wakeup: comm=kworker/3:1 pid=40 prio=120 target_cpu=003
          <idle>-0     [003] d...  6509.999974: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=40 next_prio=120
     kworker/3:1-40    [003] d...  6510.000010: sched_switch: prev_comm=kworker/3:1 prev_pid=40 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
        modprobe-1266  [001] ....  6510.005455: do_exit+0x14/0xc18 <-do_group_exit+0x4c/0xe4
        modprobe-1266  [001] ....  6510.005476: <stack trace>
 => do_exit+0x18/0xc18
 => do_group_exit+0x4c/0xe4
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0xbe908d38
        modprobe-1266  [001] ....  6510.006038: sched_process_exit: comm=modprobe pid=1266 prio=120
        modprobe-1266  [001] d...  6510.006098: signal_generate: sig=17 errno=0 code=1 comm=kworker/u8:2 pid=119 grp=1 res=1
        modprobe-1266  [001] dn..  6510.006112: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
        modprobe-1266  [001] d...  6510.006124: sched_switch: prev_comm=modprobe prev_pid=1266 prev_prio=120 prev_state=Z ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
          <idle>-0     [000] dnh.  6510.006209: sched_wakeup: comm=sudo pid=1250 prio=120 target_cpu=000
          <idle>-0     [000] d...  6510.006220: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sudo next_pid=1250 next_prio=120
    kworker/u8:2-119   [001] d...  6510.006237: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
            sudo-1250  [000] ....  6510.007360: do_exit+0x14/0xc18 <-do_group_exit+0x4c/0xe4
            sudo-1250  [000] ....  6510.007376: <stack trace>
 => do_exit+0x18/0xc18
 => do_group_exit+0x4c/0xe4
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0xbe8ec2f0
            sudo-1250  [000] ....  6510.008403: sched_process_exit: comm=sudo pid=1250 prio=120
            sudo-1250  [000] d...  6510.008526: signal_generate: sig=17 errno=0 code=1 comm=bash pid=911 grp=1 res=0
            sudo-1250  [000] d...  6510.008542: sched_switch: prev_comm=sudo prev_pid=1250 prev_prio=120 prev_state=Z ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6510.008545: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6510.008556: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
            bash-911   [003] d...  6510.008789: signal_deliver: sig=17 errno=0 code=1 sa_handler=55a6c sa_flags=14000000
          <idle>-0     [001] dnh.  6510.009732: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6510.009743: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6510.009755: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6510.009769: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6510.009771: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6510.009780: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [002] dns.  6510.009909: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6510.009950: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6510.009981: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
            sshd-908   [000] d...  6510.010100: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6510.029895: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6510.029926: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6510.029947: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6510.049895: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6510.049924: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6510.049947: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] dnH.  6510.059920: sched_wakeup: comm=kworker/3:1 pid=40 prio=120 target_cpu=003
          <idle>-0     [003] d...  6510.059947: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=40 next_prio=120
     kworker/3:1-40    [003] d...  6510.059968: sched_switch: prev_comm=kworker/3:1 prev_pid=40 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6510.069894: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6510.069922: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6510.069946: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6510.079898: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6510.079935: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/2:0-1188  [002] d...  6510.079964: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6510.089895: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [001] dns.  6510.089899: sched_wakeup: comm=kworker/1:0 pid=1258 prio=120 target_cpu=001
          <idle>-0     [002] d...  6510.089925: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
          <idle>-0     [001] d...  6510.089934: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=1258 next_prio=120
       rcu_sched-10    [002] d...  6510.089991: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/1:0-1258  [001] d...  6510.089992: sched_switch: prev_comm=kworker/1:0 prev_pid=1258 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6510.109900: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6510.109937: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6510.109956: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6510.229907: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6510.229959: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6510.230052: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6510.288936: sched_wakeup: comm=systemd-journal pid=110 prio=120 target_cpu=003
          <idle>-0     [003] d...  6510.288955: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=110 next_prio=120
 systemd-journal-110   [003] d...  6510.289177: sched_switch: prev_comm=systemd-journal prev_pid=110 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6510.319900: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6510.319935: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6510.319973: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6510.319983: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6510.319989: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6510.320005: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6510.320013: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6510.320019: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6510.320035: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6510.320043: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6510.320049: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6510.320064: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6510.320071: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6510.320077: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6510.320092: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6510.320100: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6510.320106: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6510.320121: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6510.339921: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6510.339940: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6510.339954: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6510.363276: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] d...  6510.363293: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
          <idle>-0     [001] dnh.  6510.363297: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6510.363315: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
            rngd-383   [000] d...  6510.363329: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
         lxpanel-587   [001] d...  6510.363423: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6510.559902: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [000] dns.  6510.559903: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [002] d...  6510.559938: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
          <idle>-0     [000] d...  6510.559943: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/2:0-1188  [002] d.h.  6510.559970: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
     kworker/0:1-1261  [000] d...  6510.560030: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/2:0-1188  [002] d...  6510.560033: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6510.639907: sched_wakeup: comm=khungtaskd pid=34 prio=120 target_cpu=002
          <idle>-0     [002] d...  6510.639942: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=khungtaskd next_pid=34 next_prio=120
      khungtaskd-34    [002] d...  6510.640018: sched_switch: prev_comm=khungtaskd prev_pid=34 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6510.692054: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] dnH.  6510.692063: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] dns.  6510.692083: sched_wakeup: comm=ksoftirqd/0 pid=9 prio=120 target_cpu=000
          <idle>-0     [000] d...  6510.692099: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...  6510.692115: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6510.692247: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6510.692262: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6510.692276: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [003] dnh.  6510.692285: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6510.692301: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
    kworker/u8:2-119   [001] d...  6510.692324: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
     kworker/0:1-1261  [000] d...  6510.692333: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6510.692386: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6510.692398: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6510.692414: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6510.692417: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6510.692432: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            bash-911   [003] d...  6510.692434: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
            sshd-908   [000] d...  6510.692602: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6510.817521: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] dnH.  6510.817530: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6510.817555: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6510.817655: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6510.817668: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6510.817682: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [003] dnh.  6510.817687: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6510.817702: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
    kworker/u8:2-119   [001] d...  6510.817725: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
     kworker/0:1-1261  [000] d...  6510.817735: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6510.817766: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6510.817778: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6510.817782: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6510.817793: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6510.817795: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6510.817808: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6510.817958: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6510.964020: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] dnh.  6510.964031: sched_wakeup: comm=kworker/1:0 pid=1258 prio=120 target_cpu=001
          <idle>-0     [001] d...  6510.964045: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=1258 next_prio=120
     kworker/1:0-1258  [001] d...  6510.964062: sched_switch: prev_comm=kworker/1:0 prev_pid=1258 prev_prio=120 prev_state=I ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6510.964182: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6511.034558: sched_wakeup: comm=gmain pid=564 prio=120 target_cpu=000
          <idle>-0     [000] d...  6511.034575: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gmain next_pid=564 next_prio=120
           gmain-564   [000] d...  6511.034676: sched_switch: prev_comm=gmain prev_pid=564 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6511.039925: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] dns.  6511.039954: sched_wakeup: comm=ksoftirqd/2 pid=21 prio=120 target_cpu=002
          <idle>-0     [002] d...  6511.039966: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/2 next_pid=21 next_prio=120
     ksoftirqd/2-21    [002] d...  6511.039987: sched_switch: prev_comm=ksoftirqd/2 prev_pid=21 prev_prio=120 prev_state=S ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/2:0-1188  [002] d...  6511.040036: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6511.089933: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6511.089952: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6511.089987: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6511.279941: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  6511.279952: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6511.279968: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6511.279984: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6511.280015: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6511.339918: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6511.339949: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6511.339989: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6511.359912: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6511.359944: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6511.359961: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6511.359970: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6511.359977: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6511.359992: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6511.360000: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6511.360006: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6511.360021: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6511.360029: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6511.360035: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6511.360050: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6511.360057: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6511.360063: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6511.360078: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6511.360086: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6511.360092: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6511.360107: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6511.445501: sched_wakeup: comm=avahi-daemon pid=402 prio=120 target_cpu=002
          <idle>-0     [002] dnh.  6511.445511: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6511.445527: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=avahi-daemon next_pid=402 next_prio=120
    avahi-daemon-402   [002] d...  6511.445781: sched_switch: prev_comm=avahi-daemon prev_pid=402 prev_prio=120 prev_state=S ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/2:0-1188  [002] d...  6511.445834: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6511.445843: sched_wakeup: comm=avahi-daemon pid=402 prio=120 target_cpu=002
          <idle>-0     [002] d...  6511.445849: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=avahi-daemon next_pid=402 next_prio=120
    avahi-daemon-402   [002] d...  6511.446030: sched_switch: prev_comm=avahi-daemon prev_pid=402 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6511.546117: sched_wakeup: comm=avahi-daemon pid=402 prio=120 target_cpu=002
          <idle>-0     [002] dnh.  6511.546127: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6511.546143: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/2:0-1188  [002] d...  6511.546159: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=avahi-daemon next_pid=402 next_prio=120
    avahi-daemon-402   [002] d...  6511.546288: sched_switch: prev_comm=avahi-daemon prev_pid=402 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6511.564725: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6511.564742: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6511.564803: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6511.599915: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6511.599947: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6511.600020: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6511.600043: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6511.600052: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6511.600073: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6511.839939: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6511.839958: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6511.839991: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6512.019695: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] dnH.  6512.019704: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] dns.  6512.019724: sched_wakeup: comm=ksoftirqd/0 pid=9 prio=120 target_cpu=000
          <idle>-0     [000] d...  6512.019739: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...  6512.019753: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6512.019872: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6512.019886: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6512.019901: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [003] dnh.  6512.019906: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6512.019921: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
    kworker/u8:2-119   [001] d...  6512.019927: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] dns.  6512.019955: sched_wakeup: comm=kworker/1:0 pid=1258 prio=120 target_cpu=001
     kworker/0:1-1261  [000] d...  6512.019964: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...  6512.019986: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=1258 next_prio=120
     kworker/1:0-1258  [001] d.h.  6512.019995: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
     kworker/1:0-1258  [001] d...  6512.020020: sched_switch: prev_comm=kworker/1:0 prev_pid=1258 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6512.020031: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6512.020035: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6512.020037: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6512.020050: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6512.020218: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6512.096607: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] d...  6512.096624: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6512.096678: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6512.106756: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6512.106779: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6512.106878: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6512.106891: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6512.106904: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6512.106906: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6512.106909: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6512.106923: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
          <idle>-0     [001] dnh.  6512.106983: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6512.106994: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6512.106998: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6512.107009: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6512.107011: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6512.107024: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6512.107169: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6512.149945: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6512.149965: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6512.150016: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6512.165402: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6512.165417: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6512.165483: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6512.275707: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] dnH.  6512.275716: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] dns.  6512.275733: sched_wakeup: comm=ksoftirqd/0 pid=9 prio=120 target_cpu=000
          <idle>-0     [000] d...  6512.275749: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...  6512.275762: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6512.275862: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6512.275875: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6512.275886: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [003] dnh.  6512.275892: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6512.275906: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
     kworker/0:1-1261  [000] d...  6512.275929: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6512.275930: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6512.275968: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6512.275979: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6512.275994: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6512.275997: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6512.276012: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            bash-911   [003] d...  6512.276014: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
            sshd-908   [000] d...  6512.276161: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6512.399924: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6512.399962: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6512.399983: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6512.399987: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6512.399997: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6512.400007: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6512.400023: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6512.400026: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6512.400035: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6512.400044: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6512.400060: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6512.400063: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6512.400071: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6512.400080: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6512.400096: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6512.400099: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6512.400106: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6512.400115: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6512.400130: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6512.400133: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6512.400141: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6512.400149: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6512.400199: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6512.479929: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6512.479942: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6512.479989: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6512.486890: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6512.486912: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6512.487016: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6512.487027: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6512.487039: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6512.487043: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6512.487045: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6512.487059: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
          <idle>-0     [001] dnh.  6512.487117: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6512.487129: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6512.487132: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6512.487144: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6512.487145: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6512.487154: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6512.487298: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6512.529955: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6512.529975: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6512.530027: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6512.639927: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [002] dns.  6512.639928: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6512.639964: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
          <idle>-0     [000] d...  6512.639965: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/2:0-1188  [002] d.h.  6512.639994: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
     kworker/0:1-1261  [000] dn..  6512.640000: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6512.640004: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/2:0-1188  [002] d...  6512.640016: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6512.640025: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6512.640031: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/0:0-1059  [000] d.s.  6512.640041: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6512.640052: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/2:0-1188  [002] d...  6512.640060: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/0:1-1261  [000] d...  6512.640080: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6512.766080: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] dnh.  6512.766091: sched_wakeup: comm=kworker/1:0 pid=1258 prio=120 target_cpu=001
          <idle>-0     [001] d...  6512.766106: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=1258 next_prio=120
     kworker/1:0-1258  [001] d...  6512.766121: sched_switch: prev_comm=kworker/1:0 prev_pid=1258 prev_prio=120 prev_state=I ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6512.766238: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6512.828525: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6512.828549: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6512.828652: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6512.828665: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6512.828678: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6512.828682: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6512.828683: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6512.828697: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
          <idle>-0     [001] dnh.  6512.828762: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6512.828773: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6512.828777: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6512.828789: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6512.828791: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6512.828804: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6512.828952: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6512.829942: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] d...  6512.829960: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6512.829975: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6512.869948: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6512.869966: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6512.870018: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6512.920686: sched_wakeup: comm=wpa_supplicant pid=472 prio=120 target_cpu=003
          <idle>-0     [003] d...  6512.920703: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=wpa_supplicant next_pid=472 next_prio=120
  wpa_supplicant-472   [003] d...  6512.920824: sched_switch: prev_comm=wpa_supplicant prev_pid=472 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6512.960951: sched_wakeup: comm=thd pid=378 prio=120 target_cpu=000
          <idle>-0     [000] d...  6512.960967: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=thd next_pid=378 next_prio=120
             thd-378   [000] d...  6512.961019: sched_switch: prev_comm=thd prev_pid=378 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6513.039954: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6513.039972: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6513.040005: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6513.061062: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6513.061086: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6513.061188: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6513.061201: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6513.061212: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6513.061215: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6513.061218: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6513.061232: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
          <idle>-0     [001] dnh.  6513.061300: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6513.061311: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6513.061315: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6513.061326: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6513.061328: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6513.061341: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6513.061487: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6513.120094: sched_wakeup: comm=wpa_supplicant pid=400 prio=120 target_cpu=001
          <idle>-0     [001] d...  6513.120110: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=wpa_supplicant next_pid=400 next_prio=120
  wpa_supplicant-400   [001] d...  6513.120188: sched_switch: prev_comm=wpa_supplicant prev_pid=400 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6513.199935: sched_wakeup: comm=kworker/0:2H pid=97 prio=100 target_cpu=000
          <idle>-0     [000] dnH.  6513.199945: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6513.199988: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2H next_pid=97 next_prio=100
    kworker/0:2H-97    [000] d...  6513.200005: sched_switch: prev_comm=kworker/0:2H prev_pid=97 prev_prio=100 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [002] dnh.  6513.200047: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6513.200061: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/0:1-1261  [000] d...  6513.200083: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/2:0-1188  [002] d...  6513.200092: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6513.228967: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6513.228991: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6513.229088: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6513.229100: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6513.229113: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6513.229118: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6513.229119: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6513.229134: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
          <idle>-0     [001] dnh.  6513.229194: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6513.229205: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6513.229209: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6513.229220: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6513.229222: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6513.229235: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6513.229380: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6513.339957: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6513.339976: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6513.340042: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6513.355315: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6513.355338: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6513.355434: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6513.355446: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6513.355457: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6513.355461: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6513.355464: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6513.355478: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
          <idle>-0     [001] dnh.  6513.356271: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6513.356282: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6513.356292: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6513.356297: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6513.356300: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6513.356314: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6513.356468: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] dns.  6513.359948: sched_wakeup: comm=kworker/3:1 pid=40 prio=120 target_cpu=003
          <idle>-0     [002] dnh.  6513.359990: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [003] d...  6513.359996: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=40 next_prio=120
          <idle>-0     [002] d...  6513.360004: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6513.360023: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/3:1-40    [003] d...  6513.360027: sched_switch: prev_comm=kworker/3:1 prev_pid=40 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6513.366787: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6513.366803: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6513.366881: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6513.379938: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6513.379983: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6513.380050: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6513.399935: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6513.399974: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6513.399993: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6513.439937: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6513.439978: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6513.440050: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6513.440059: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  6513.440068: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6513.440076: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d...  6513.440085: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6513.440102: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6513.440106: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6513.440115: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6513.440124: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6513.440140: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6513.440143: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6513.440150: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6513.440159: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6513.440175: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6513.440178: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6513.440185: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6513.440194: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6513.440210: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6513.440213: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6513.440220: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6513.440229: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6513.440265: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6513.569958: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6513.569981: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6513.570027: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6513.663276: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] d...  6513.663293: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6513.663313: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6513.679946: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6513.679988: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6513.680024: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6513.680027: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.s.  6513.680050: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6513.680061: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6513.680100: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6513.740753: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6513.740776: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6513.740886: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6513.740899: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6513.740909: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6513.740917: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6513.740920: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6513.740935: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
          <idle>-0     [001] dnh.  6513.740974: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6513.740985: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6513.741001: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6513.741004: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6513.741017: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6513.741181: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
            bash-911   [003] ....  6513.741195: sys_clone+0x14/0x3c <-ret_fast_syscall+0x0/0x28
            bash-911   [003] ....  6513.741214: <stack trace>
 => sys_clone+0x18/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0xbea89780
            bash-911   [003] ....  6513.741217: _do_fork+0x14/0x438 <-sys_clone+0x34/0x3c
            bash-911   [003] ....  6513.741227: <stack trace>
 => _do_fork+0x18/0x438
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0xbea89780
            bash-911   [003] ....  6513.741230: copy_process.part.5+0x14/0x1ad4 <-_do_fork+0xd8/0x438
            bash-911   [003] ....  6513.741240: <stack trace>
 => copy_process.part.5+0x18/0x1ad4
 => _do_fork+0xd8/0x438
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0xbea89780
            bash-911   [003] ....  6513.741813: sched_process_fork: comm=bash pid=911 child_comm=bash child_pid=1267
          <idle>-0     [000] d...  6513.741848: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1267 next_prio=120
            bash-911   [003] d...  6513.742523: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6513.746705: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6513.746729: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6513.746755: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=001
    kworker/u8:2-119   [001] d...  6513.746769: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=908 next_prio=120
      rpi_return-1267  [000] d...  6513.746851: sched_switch: prev_comm=rpi_return prev_pid=1267 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
            sshd-908   [001] d...  6513.746987: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6513.749987: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6513.750003: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6513.750021: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6513.769945: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6513.769990: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6513.770014: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6513.779966: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6513.780010: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6513.780081: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6513.789941: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6513.789979: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6513.789997: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6513.959963: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6513.959982: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6513.960045: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6513.967479: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6513.967496: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6513.967584: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6514.089966: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6514.089984: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6514.090018: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6514.339952: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6514.339991: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6514.340032: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6514.479951: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6514.479990: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6514.480011: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6514.480015: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6514.480025: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6514.480035: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6514.480052: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6514.480054: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6514.480062: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6514.480071: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6514.480087: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6514.480090: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6514.480098: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6514.480106: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6514.480122: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6514.480125: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6514.480132: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6514.480141: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6514.480157: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6514.480160: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6514.480167: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6514.480176: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6514.480208: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6514.529942: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] d...  6514.529961: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6514.529982: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6514.568175: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6514.568193: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6514.568246: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6514.589972: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6514.589991: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6514.590025: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6514.719951: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [002] dns.  6514.719952: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [000] d...  6514.719989: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [002] d...  6514.719990: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/2:0-1188  [002] d.h.  6514.720020: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
     kworker/0:1-1261  [000] dn..  6514.720030: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6514.720034: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/2:0-1188  [002] d...  6514.720041: sched_wakeup: comm=kworker/2:2 pid=1087 prio=120 target_cpu=002
     kworker/2:0-1188  [002] d...  6514.720045: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=D ==> next_comm=kworker/2:2 next_pid=1087 next_prio=120
     kworker/2:2-1087  [002] d.h.  6514.720056: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
     kworker/0:0-1059  [000] d.s.  6514.720072: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/2:2-1087  [002] d...  6514.720079: sched_switch: prev_comm=kworker/2:2 prev_pid=1087 prev_prio=120 prev_state=I ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/0:0-1059  [000] d...  6514.720084: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/2:0-1188  [002] d...  6514.720107: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/0:1-1261  [000] d...  6514.720117: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6514.839975: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6514.839993: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6514.840027: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6515.034693: sched_wakeup: comm=gmain pid=564 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  6515.034703: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6515.034719: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gmain next_pid=564 next_prio=120
           gmain-564   [000] d...  6515.034793: sched_switch: prev_comm=gmain prev_pid=564 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6515.034826: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6515.039963: sched_wakeup: comm=jbd2/mmcblk0p2- pid=78 prio=120 target_cpu=000
          <idle>-0     [003] dns.  6515.039968: sched_wakeup: comm=kworker/3:1 pid=40 prio=120 target_cpu=003
          <idle>-0     [000] d...  6515.039978: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=jbd2/mmcblk0p2- next_pid=78 next_prio=120
          <idle>-0     [003] d...  6515.040014: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=40 next_prio=120
     kworker/3:1-40    [003] d...  6515.040044: sched_switch: prev_comm=kworker/3:1 prev_pid=40 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
 jbd2/mmcblk0p2--78    [000] dn..  6515.040109: sched_wakeup: comm=kworker/0:2H pid=97 prio=100 target_cpu=000
 jbd2/mmcblk0p2--78    [000] d...  6515.040118: sched_switch: prev_comm=jbd2/mmcblk0p2- prev_pid=78 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:2H next_pid=97 next_prio=100
    kworker/0:2H-97    [000] d...  6515.040175: sched_switch: prev_comm=kworker/0:2H prev_pid=97 prev_prio=100 prev_state=I ==> next_comm=jbd2/mmcblk0p2- next_pid=78 next_prio=120
 jbd2/mmcblk0p2--78    [000] d...  6515.040212: sched_switch: prev_comm=jbd2/mmcblk0p2- prev_pid=78 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6515.042962: sched_wakeup: comm=kworker/0:2H pid=97 prio=100 target_cpu=000
          <idle>-0     [000] d...  6515.042978: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2H next_pid=97 next_prio=100
    kworker/0:2H-97    [000] d.s.  6515.043009: sched_wakeup: comm=kworker/0:2H pid=97 prio=100 target_cpu=000
    kworker/0:2H-97    [000] d...  6515.043035: sched_wakeup: comm=jbd2/mmcblk0p2- pid=78 prio=120 target_cpu=000
    kworker/0:2H-97    [000] d...  6515.043060: sched_switch: prev_comm=kworker/0:2H prev_pid=97 prev_prio=100 prev_state=I ==> next_comm=jbd2/mmcblk0p2- next_pid=78 next_prio=120
 jbd2/mmcblk0p2--78    [000] dn..  6515.043113: sched_wakeup: comm=kworker/0:2H pid=97 prio=100 target_cpu=000
 jbd2/mmcblk0p2--78    [000] d...  6515.043123: sched_switch: prev_comm=jbd2/mmcblk0p2- prev_pid=78 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:2H next_pid=97 next_prio=100
    kworker/0:2H-97    [000] d...  6515.043164: sched_switch: prev_comm=kworker/0:2H prev_pid=97 prev_prio=100 prev_state=I ==> next_comm=jbd2/mmcblk0p2- next_pid=78 next_prio=120
 jbd2/mmcblk0p2--78    [000] d...  6515.043197: sched_switch: prev_comm=jbd2/mmcblk0p2- prev_pid=78 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6515.043936: sched_wakeup: comm=kworker/0:2H pid=97 prio=100 target_cpu=000
          <idle>-0     [000] d...  6515.043952: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2H next_pid=97 next_prio=100
    kworker/0:2H-97    [000] d...  6515.043971: sched_switch: prev_comm=kworker/0:2H prev_pid=97 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6515.043990: sched_wakeup: comm=kworker/0:2H pid=97 prio=100 target_cpu=000
          <idle>-0     [000] d...  6515.043998: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2H next_pid=97 next_prio=100
    kworker/0:2H-97    [000] d...  6515.044012: sched_wakeup: comm=jbd2/mmcblk0p2- pid=78 prio=120 target_cpu=000
    kworker/0:2H-97    [000] d...  6515.044032: sched_switch: prev_comm=kworker/0:2H prev_pid=97 prev_prio=100 prev_state=I ==> next_comm=jbd2/mmcblk0p2- next_pid=78 next_prio=120
 jbd2/mmcblk0p2--78    [000] d...  6515.044071: sched_switch: prev_comm=jbd2/mmcblk0p2- prev_pid=78 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6515.168840: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] dnh.  6515.168852: sched_wakeup: comm=kworker/1:0 pid=1258 prio=120 target_cpu=001
          <idle>-0     [001] d...  6515.168867: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=1258 next_prio=120
     kworker/1:0-1258  [001] d...  6515.168885: sched_switch: prev_comm=kworker/1:0 prev_pid=1258 prev_prio=120 prev_state=I ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6515.169000: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6515.339981: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6515.340000: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6515.340035: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6515.463275: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  6515.463285: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6515.463300: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6515.463320: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6515.463352: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6515.519961: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6515.520001: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6515.520021: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6515.520031: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6515.520038: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6515.520053: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6515.520061: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6515.520068: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6515.520083: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6515.520090: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6515.520097: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6515.520112: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6515.520119: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6515.520125: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6515.520140: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6515.520148: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6515.520154: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6515.520169: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6515.589983: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6515.590001: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6515.590019: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6515.759962: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6515.759999: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6515.760030: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6515.760033: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.s.  6515.760054: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6515.760066: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6515.760110: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6515.769537: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6515.769554: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6515.769627: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6516.089986: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6516.090004: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6516.090040: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6516.339975: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6516.340011: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6516.340036: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6516.370205: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6516.370222: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6516.370275: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6516.429940: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] d...  6516.429990: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6516.430003: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6516.559972: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6516.560009: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6516.560025: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6516.560029: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6516.560037: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6516.560047: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6516.560064: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6516.560067: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6516.560074: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6516.560084: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6516.560099: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6516.560102: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6516.560111: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6516.560120: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6516.560136: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6516.560138: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6516.560146: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6516.560155: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6516.560171: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6516.560174: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6516.560181: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6516.560190: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6516.560227: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6516.746845: sched_wakeup: comm=rpi_return pid=1267 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  6516.746855: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6516.746872: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rpi_return next_pid=1267 next_prio=120
          <idle>-0     [001] dnh.  6516.746905: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
      rpi_return-1267  [000] d...  6516.746918: sched_switch: prev_comm=rpi_return prev_pid=1267 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [001] d...  6516.746920: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6516.746935: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=001
    kworker/u8:2-119   [001] d...  6516.746946: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=908 next_prio=120
     kworker/0:1-1261  [000] d...  6516.746950: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            sshd-908   [001] d...  6516.747141: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6516.799974: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [000] dns.  6516.799977: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [002] d...  6516.800012: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
          <idle>-0     [000] d...  6516.800014: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/2:0-1188  [002] d.h.  6516.800038: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
     kworker/2:0-1188  [002] d...  6516.800055: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/0:1-1261  [000] d...  6516.800064: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6516.800079: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6516.800091: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
          <idle>-0     [000] dns.  6516.800092: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6516.800100: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/2:0-1188  [002] d...  6516.800107: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/0:1-1261  [000] d...  6516.800123: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnH.  6516.960006: sched_wakeup: comm=kworker/1:0 pid=1258 prio=120 target_cpu=001
          <idle>-0     [001] d...  6516.960032: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=1258 next_prio=120
     kworker/1:0-1258  [001] d...  6516.960082: sched_switch: prev_comm=kworker/1:0 prev_pid=1258 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6516.970878: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6516.970894: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6516.970962: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6516.980033: sched_wakeup: comm=ssh-agent pid=557 prio=120 target_cpu=003
          <idle>-0     [003] d...  6516.980050: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ssh-agent next_pid=557 next_prio=120
       ssh-agent-557   [003] d...  6516.980088: sched_switch: prev_comm=ssh-agent prev_pid=557 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6517.090000: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6517.090019: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6517.090070: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6517.340002: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6517.340021: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6517.340039: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6517.346606: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] d...  6517.346621: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6517.346635: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dns.  6517.519989: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] dnH.  6517.519998: sched_wakeup: comm=kworker/1:0 pid=1258 prio=120 target_cpu=001
          <idle>-0     [001] d...  6517.520037: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=1258 next_prio=120
     kworker/1:0-1258  [001] d...  6517.520052: sched_switch: prev_comm=kworker/1:0 prev_pid=1258 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6517.520109: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6517.571565: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6517.571581: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6517.571642: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6517.599984: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6517.600015: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6517.600030: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6517.600039: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6517.600046: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6517.600061: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6517.600069: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6517.600075: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6517.600090: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6517.600098: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6517.600104: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6517.600118: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6517.600126: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6517.600132: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6517.600147: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6517.600154: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6517.600160: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6517.600175: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6517.680007: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6517.680025: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6517.680059: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6517.839986: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6517.840027: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6517.840057: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6517.840061: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.s.  6517.840081: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6517.840093: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6517.840131: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6517.966055: sched_wakeup: comm=thd pid=378 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  6517.966065: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6517.966080: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=thd next_pid=378 next_prio=120
             thd-378   [000] d...  6517.966115: sched_switch: prev_comm=thd prev_pid=378 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6517.966146: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6518.090011: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6518.090029: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6518.090046: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6518.159998: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6518.160028: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6518.160067: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6518.172234: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6518.172250: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6518.172302: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6518.313273: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  6518.313283: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6518.313299: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6518.313312: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6518.313359: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6518.319995: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6518.320023: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6518.320047: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6518.590020: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6518.590038: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6518.590056: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6518.639996: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6518.640028: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6518.640047: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6518.640056: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6518.640062: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6518.640078: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6518.640086: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6518.640092: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6518.640107: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6518.640115: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6518.640122: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6518.640137: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6518.640145: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6518.640151: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6518.640166: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6518.640173: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6518.640179: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6518.640194: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6518.772902: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] dnh.  6518.772913: sched_wakeup: comm=kworker/1:0 pid=1258 prio=120 target_cpu=001
          <idle>-0     [001] d...  6518.772927: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=1258 next_prio=120
     kworker/1:0-1258  [001] d...  6518.772942: sched_switch: prev_comm=kworker/1:0 prev_pid=1258 prev_prio=120 prev_state=I ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6518.773029: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6518.879998: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [002] dns.  6518.879999: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [000] d...  6518.880031: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [002] d...  6518.880037: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/2:0-1188  [002] d.h.  6518.880061: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
     kworker/0:1-1261  [000] d...  6518.880078: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/2:0-1188  [002] d...  6518.880081: sched_wakeup: comm=kworker/2:2 pid=1087 prio=120 target_cpu=002
     kworker/2:0-1188  [002] d...  6518.880085: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=D ==> next_comm=kworker/2:2 next_pid=1087 next_prio=120
     kworker/2:2-1087  [002] d.h.  6518.880095: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [000] dns.  6518.880107: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/2:2-1087  [002] d...  6518.880107: sched_switch: prev_comm=kworker/2:2 prev_pid=1087 prev_prio=120 prev_state=I ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
          <idle>-0     [000] d...  6518.880116: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/2:0-1188  [002] d...  6518.880135: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/0:1-1261  [000] d...  6518.880137: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6519.034831: sched_wakeup: comm=gmain pid=564 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  6519.034841: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6519.034857: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gmain next_pid=564 next_prio=120
           gmain-564   [000] d...  6519.034922: sched_switch: prev_comm=gmain prev_pid=564 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6519.034972: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6519.263274: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  6519.263285: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6519.263300: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6519.263315: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6519.263345: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6519.340010: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6519.340043: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6519.340078: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6519.373593: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] dnh.  6519.373603: sched_wakeup: comm=kworker/1:0 pid=1258 prio=120 target_cpu=001
          <idle>-0     [001] d...  6519.373617: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=1258 next_prio=120
     kworker/1:0-1258  [001] d...  6519.373631: sched_switch: prev_comm=kworker/1:0 prev_pid=1258 prev_prio=120 prev_state=I ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6519.373721: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6519.590030: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6519.590048: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6519.590082: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6519.680006: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6519.680039: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6519.680058: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6519.680067: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6519.680074: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6519.680089: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6519.680097: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6519.680103: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6519.680118: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6519.680126: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6519.680132: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6519.680146: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6519.680154: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6519.680160: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6519.680175: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6519.680183: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6519.680189: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6519.680204: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6519.747006: sched_wakeup: comm=rpi_return pid=1267 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  6519.747016: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6519.747031: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rpi_return next_pid=1267 next_prio=120
          <idle>-0     [001] dnh.  6519.747061: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
      rpi_return-1267  [000] d...  6519.747073: sched_switch: prev_comm=rpi_return prev_pid=1267 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [001] d...  6519.747074: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6519.747089: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=001
    kworker/u8:2-119   [001] d...  6519.747099: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=908 next_prio=120
     kworker/0:1-1261  [000] d...  6519.747105: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            sshd-908   [001] d...  6519.747276: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6519.920012: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6519.920049: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6519.920081: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6519.920085: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.s.  6519.920106: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6519.920118: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6519.920173: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6519.974290: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6519.974307: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6519.974388: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6520.090037: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6520.090055: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6520.090090: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6520.196608: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  6520.196618: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6520.196633: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6520.196648: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6520.196678: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6520.240017: sched_wakeup: comm=kworker/0:2H pid=97 prio=100 target_cpu=000
          <idle>-0     [000] d...  6520.240050: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2H next_pid=97 next_prio=100
    kworker/0:2H-97    [000] d...  6520.240070: sched_switch: prev_comm=kworker/0:2H prev_pid=97 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6520.340037: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6520.340055: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6520.340072: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6520.464639: sched_wakeup: comm=avahi-daemon pid=402 prio=120 target_cpu=002
          <idle>-0     [002] dnh.  6520.464648: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6520.464663: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=avahi-daemon next_pid=402 next_prio=120
    avahi-daemon-402   [002] d...  6520.464959: sched_switch: prev_comm=avahi-daemon prev_pid=402 prev_prio=120 prev_state=S ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/2:0-1188  [002] d...  6520.465012: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6520.465036: sched_wakeup: comm=avahi-daemon pid=402 prio=120 target_cpu=002
          <idle>-0     [002] d...  6520.465049: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=avahi-daemon next_pid=402 next_prio=120
    avahi-daemon-402   [002] d...  6520.465161: sched_switch: prev_comm=avahi-daemon prev_pid=402 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6520.565243: sched_wakeup: comm=avahi-daemon pid=402 prio=120 target_cpu=002
          <idle>-0     [002] dnh.  6520.565253: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6520.565268: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/2:0-1188  [002] d...  6520.565284: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=avahi-daemon next_pid=402 next_prio=120
    avahi-daemon-402   [002] d...  6520.565412: sched_switch: prev_comm=avahi-daemon prev_pid=402 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6520.574965: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6520.574981: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6520.575037: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6520.720021: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6520.720059: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6520.720077: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6520.720081: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6520.720089: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6520.720099: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6520.720116: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6520.720118: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6520.720126: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6520.720136: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6520.720151: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6520.720154: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6520.720162: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6520.720171: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6520.720186: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6520.720189: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6520.720197: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6520.720206: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6520.720221: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6520.720224: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6520.720231: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6520.720240: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6520.720307: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6520.840043: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6520.840061: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6520.840079: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6520.960024: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [002] dns.  6520.960025: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6520.960060: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
          <idle>-0     [000] d...  6520.960062: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/2:0-1188  [002] d.h.  6520.960085: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
     kworker/0:1-1261  [000] dn..  6520.960095: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6520.960098: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/2:0-1188  [002] d...  6520.960106: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6520.960116: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6520.960122: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/0:0-1059  [000] d.s.  6520.960129: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6520.960141: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/2:0-1188  [002] d...  6520.960149: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/0:1-1261  [000] d...  6520.960168: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6521.079941: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  6521.079951: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6521.079966: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6521.079981: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6521.080012: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6521.120031: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6521.120061: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6521.120100: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6521.175634: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6521.175650: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6521.175722: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6521.340050: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6521.340068: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6521.340103: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6521.590051: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6521.590069: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6521.590087: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6521.760032: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6521.760069: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6521.760085: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6521.760089: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6521.760097: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6521.760107: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6521.760123: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6521.760126: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6521.760134: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6521.760143: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6521.760159: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6521.760162: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6521.760169: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6521.760178: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6521.760194: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6521.760197: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6521.760204: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6521.760213: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6521.760229: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6521.760232: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6521.760239: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6521.760248: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6521.760282: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6521.776300: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6521.776316: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6521.776390: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6522.000033: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6522.000069: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6522.000097: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6522.000101: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.s.  6522.000121: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6522.000133: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6522.000191: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6522.039075: sched_wakeup: comm=systemd-timesyn pid=324 prio=120 target_cpu=001
          <idle>-0     [001] d...  6522.039092: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-timesyn next_pid=324 next_prio=120
          <idle>-0     [003] dnh.  6522.039382: sched_wakeup: comm=systemd pid=1 prio=120 target_cpu=003
          <idle>-0     [003] d...  6522.039398: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd next_pid=1 next_prio=120
 systemd-timesyn-324   [001] d...  6522.039508: sched_switch: prev_comm=systemd-timesyn prev_pid=324 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
         systemd-1     [003] d...  6522.039780: sched_switch: prev_comm=systemd prev_pid=1 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6522.040081: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6522.040095: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6522.040114: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6522.046605: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] d...  6522.046622: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6522.046636: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6522.060038: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6522.060081: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6522.060105: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6522.080038: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6522.080074: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6522.080142: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6522.340046: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6522.340083: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6522.340169: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6522.376971: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6522.376989: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6522.377061: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] dns.  6522.560047: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] dnH.  6522.560058: sched_wakeup: comm=kworker/1:0 pid=1258 prio=120 target_cpu=001
          <idle>-0     [001] d...  6522.560102: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=1258 next_prio=120
     kworker/1:0-1258  [001] d...  6522.560120: sched_switch: prev_comm=kworker/1:0 prev_pid=1258 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6522.560175: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6522.747160: sched_wakeup: comm=rpi_return pid=1267 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  6522.747170: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6522.747187: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rpi_return next_pid=1267 next_prio=120
      rpi_return-1267  [000] ....  6522.747307: do_exit+0x14/0xc18 <-do_group_exit+0x4c/0xe4
      rpi_return-1267  [000] ....  6522.747327: <stack trace>
 => do_exit+0x18/0xc18
 => do_group_exit+0x4c/0xe4
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0xbebc1488
      rpi_return-1267  [000] ....  6522.747646: sched_process_exit: comm=rpi_return pid=1267 prio=120
      rpi_return-1267  [000] d...  6522.747709: signal_generate: sig=17 errno=0 code=1 comm=bash pid=911 grp=1 res=0
      rpi_return-1267  [000] d...  6522.747724: sched_switch: prev_comm=rpi_return prev_pid=1267 prev_prio=120 prev_state=Z ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [003] dnh.  6522.747728: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6522.747745: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
     kworker/0:1-1261  [000] d...  6522.747780: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            bash-911   [003] d...  6522.747941: signal_deliver: sig=17 errno=0 code=1 sa_handler=55a6c sa_flags=14000000
          <idle>-0     [001] dnh.  6522.748877: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6522.748894: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6522.748901: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6522.748912: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=001
    kworker/u8:2-119   [001] d...  6522.748923: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [001] d...  6522.749155: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6522.750081: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6522.750097: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6522.750115: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6522.770049: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6522.770094: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6522.770119: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6522.790046: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6522.790082: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6522.790140: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6522.800047: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6522.800080: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6522.800098: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6522.800107: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6522.800114: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6522.800129: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6522.800137: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6522.800143: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6522.800158: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6522.800166: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6522.800171: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6522.800188: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6522.800195: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6522.800201: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6522.800216: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6522.800224: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6522.800230: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6522.800246: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6522.810047: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6522.810083: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6522.810107: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6522.830046: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6522.830081: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6522.830147: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6522.930895: sched_wakeup: comm=wpa_supplicant pid=472 prio=120 target_cpu=003
          <idle>-0     [003] dnh.  6522.930908: sched_wakeup: comm=kworker/3:1 pid=40 prio=120 target_cpu=003
          <idle>-0     [003] d...  6522.930924: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=wpa_supplicant next_pid=472 next_prio=120
  wpa_supplicant-472   [003] d...  6522.931025: sched_switch: prev_comm=wpa_supplicant prev_pid=472 prev_prio=120 prev_state=S ==> next_comm=kworker/3:1 next_pid=40 next_prio=120
     kworker/3:1-40    [003] d...  6522.931092: sched_switch: prev_comm=kworker/3:1 prev_pid=40 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6522.971171: sched_wakeup: comm=thd pid=378 prio=120 target_cpu=000
          <idle>-0     [000] d...  6522.971189: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=thd next_pid=378 next_prio=120
             thd-378   [000] d...  6522.971251: sched_switch: prev_comm=thd prev_pid=378 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6522.977661: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6522.977677: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6522.977763: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6522.979940: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] d...  6522.979955: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6522.979970: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6523.034962: sched_wakeup: comm=gmain pid=564 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  6523.034972: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6523.034988: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gmain next_pid=564 next_prio=120
           gmain-564   [000] d...  6523.035057: sched_switch: prev_comm=gmain prev_pid=564 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6523.035122: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6523.040049: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [002] dns.  6523.040064: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [000] d...  6523.040084: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [002] dns.  6523.040094: sched_wakeup: comm=ksoftirqd/2 pid=21 prio=120 target_cpu=002
          <idle>-0     [002] d...  6523.040107: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/2 next_pid=21 next_prio=120
     ksoftirqd/2-21    [002] d...  6523.040126: sched_switch: prev_comm=ksoftirqd/2 prev_pid=21 prev_prio=120 prev_state=S ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/0:1-1261  [000] d.s.  6523.040136: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/2:0-1188  [002] d.h.  6523.040154: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
     kworker/0:1-1261  [000] d...  6523.040177: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/2:0-1188  [002] d...  6523.040184: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6523.040193: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6523.040200: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/2:0-1188  [002] d...  6523.040216: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6523.130266: sched_wakeup: comm=wpa_supplicant pid=400 prio=120 target_cpu=001
          <idle>-0     [001] d...  6523.130282: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=wpa_supplicant next_pid=400 next_prio=120
  wpa_supplicant-400   [001] d...  6523.130355: sched_switch: prev_comm=wpa_supplicant prev_pid=400 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6523.340072: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6523.340096: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6523.340131: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6523.439142: sched_wakeup: comm=avahi-daemon pid=402 prio=120 target_cpu=002
          <idle>-0     [002] d...  6523.439157: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=avahi-daemon next_pid=402 next_prio=120
    avahi-daemon-402   [002] d...  6523.439527: sched_switch: prev_comm=avahi-daemon prev_pid=402 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6523.539595: sched_wakeup: comm=avahi-daemon pid=402 prio=120 target_cpu=002
          <idle>-0     [002] dnh.  6523.539606: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6523.539621: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/2:0-1188  [002] d...  6523.539636: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=avahi-daemon next_pid=402 next_prio=120
    avahi-daemon-402   [002] d...  6523.539764: sched_switch: prev_comm=avahi-daemon prev_pid=402 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6523.578360: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6523.578377: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6523.578461: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6523.586036: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] dns.  6523.586056: sched_wakeup: comm=ksoftirqd/0 pid=9 prio=120 target_cpu=000
          <idle>-0     [000] d...  6523.586073: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6523.586203: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6523.586217: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6523.586232: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
          <idle>-0     [003] dnh.  6523.586241: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6523.586255: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
    kworker/u8:2-119   [001] d...  6523.586277: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
     ksoftirqd/0-9     [000] d...  6523.586286: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6523.586339: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6523.586350: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6523.586356: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6523.586367: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6523.586367: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6523.586376: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6523.586548: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6523.692838: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] dnH.  6523.692848: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] dns.  6523.692866: sched_wakeup: comm=ksoftirqd/0 pid=9 prio=120 target_cpu=000
          <idle>-0     [000] d...  6523.692881: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...  6523.692895: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6523.692998: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6523.693011: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6523.693025: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [003] dnh.  6523.693029: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6523.693043: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
     kworker/0:1-1261  [000] d...  6523.693081: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6523.693092: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6523.693109: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6523.693120: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6523.693134: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6523.693136: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6523.693138: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6523.693151: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6523.693302: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6523.813277: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  6523.813287: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6523.813304: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6523.813321: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6523.813383: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6523.818916: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6523.818938: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6523.819035: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6523.819048: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6523.819062: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6523.819065: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
            sshd-908   [000] d...  6523.819070: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...  6523.819078: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
          <idle>-0     [001] dnh.  6523.819138: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6523.819149: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6523.819152: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6523.819163: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6523.819165: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6523.819178: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6523.819323: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6523.840060: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6523.840105: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6523.840124: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6523.840133: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6523.840140: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6523.840155: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6523.840164: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6523.840170: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6523.840185: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6523.840193: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6523.840198: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6523.840214: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6523.840222: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6523.840227: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6523.840242: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6523.840250: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6523.840256: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6523.840271: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6523.969724: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] dnH.  6523.969732: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] dns.  6523.969750: sched_wakeup: comm=ksoftirqd/0 pid=9 prio=120 target_cpu=000
          <idle>-0     [000] d...  6523.969765: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...  6523.969778: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6523.969874: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6523.969887: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6523.969900: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [003] dnh.  6523.969905: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6523.969919: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
    kworker/u8:2-119   [001] d...  6523.969940: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
     kworker/0:1-1261  [000] d...  6523.969950: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6523.969980: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6523.969991: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6523.970006: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
            bash-911   [003] d...  6523.970007: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6523.970008: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6523.970021: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6523.970213: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6524.080061: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6524.080104: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d.s.  6524.080152: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6524.080223: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6524.096325: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6524.096346: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6524.096444: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6524.096456: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6524.096469: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6524.096471: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6524.096474: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6524.096487: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
          <idle>-0     [001] dnh.  6524.096547: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6524.096558: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6524.096561: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6524.096572: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6524.096574: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6524.096587: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6524.096737: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6524.160069: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6524.160104: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [003] dnh.  6524.160125: sched_wakeup: comm=kworker/3:1 pid=40 prio=120 target_cpu=003
          <idle>-0     [003] d...  6524.160138: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=40 next_prio=120
     kworker/3:1-40    [003] d...  6524.160166: sched_switch: prev_comm=kworker/3:1 prev_pid=40 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
     kworker/0:1-1261  [000] d...  6524.160167: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6524.179042: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6524.179058: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6524.179128: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6524.289411: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] dnH.  6524.289419: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] dns.  6524.289438: sched_wakeup: comm=ksoftirqd/0 pid=9 prio=120 target_cpu=000
          <idle>-0     [000] d...  6524.289453: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...  6524.289467: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6524.289565: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6524.289578: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6524.289589: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [003] dnh.  6524.289595: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6524.289608: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
    kworker/u8:2-119   [001] d...  6524.289633: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
     kworker/0:1-1261  [000] d...  6524.289643: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6524.289673: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6524.289685: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6524.289700: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6524.289700: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6524.289702: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6524.289715: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6524.289861: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6524.437357: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] dnH.  6524.437366: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] dns.  6524.437384: sched_wakeup: comm=ksoftirqd/0 pid=9 prio=120 target_cpu=000
          <idle>-0     [000] d...  6524.437399: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...  6524.437412: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6524.437509: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6524.437522: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6524.437536: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [003] dnh.  6524.437539: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6524.437553: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
    kworker/u8:2-119   [001] d...  6524.437572: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
     kworker/0:1-1261  [000] d...  6524.437573: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6524.437614: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6524.437625: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6524.437641: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6524.437642: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6524.437642: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6524.437656: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6524.437799: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6524.441621: sched_wakeup: comm=avahi-daemon pid=402 prio=120 target_cpu=002
          <idle>-0     [002] d...  6524.441635: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=avahi-daemon next_pid=402 next_prio=120
          <idle>-0     [000] dnh.  6524.441710: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] d...  6524.441753: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6524.441806: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    avahi-daemon-402   [002] d...  6524.441967: sched_switch: prev_comm=avahi-daemon prev_pid=402 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6524.542058: sched_wakeup: comm=avahi-daemon pid=402 prio=120 target_cpu=002
          <idle>-0     [002] dnh.  6524.542068: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6524.542084: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/2:0-1188  [002] d...  6524.542100: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=avahi-daemon next_pid=402 next_prio=120
    avahi-daemon-402   [002] d...  6524.542279: sched_switch: prev_comm=avahi-daemon prev_pid=402 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6524.608384: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6524.608409: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6524.608510: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6524.608523: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6524.608539: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6524.608542: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
            sshd-908   [000] d...  6524.608553: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...  6524.608555: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
          <idle>-0     [001] dnh.  6524.608618: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6524.608629: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6524.608632: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6524.608644: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6524.608646: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6524.608659: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6524.608809: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6524.650090: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6524.650115: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6524.650181: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6524.779730: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] dnh.  6524.779741: sched_wakeup: comm=kworker/1:0 pid=1258 prio=120 target_cpu=001
          <idle>-0     [001] d...  6524.779755: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=1258 next_prio=120
     kworker/1:0-1258  [001] d...  6524.779771: sched_switch: prev_comm=kworker/1:0 prev_pid=1258 prev_prio=120 prev_state=I ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6524.779874: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6524.880069: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6524.880112: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6524.880132: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6524.880137: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6524.880147: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6524.880158: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6524.880174: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6524.880177: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6524.880185: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6524.880194: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6524.880211: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6524.880213: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6524.880221: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6524.880230: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6524.880246: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6524.880249: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6524.880257: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6524.880266: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6524.880282: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6524.880285: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6524.880292: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6524.880301: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6524.880350: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] dnH.  6525.040106: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] dns.  6525.040117: sched_wakeup: comm=ksoftirqd/2 pid=21 prio=120 target_cpu=002
          <idle>-0     [002] d...  6525.040130: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/2 next_pid=21 next_prio=120
     ksoftirqd/2-21    [002] d...  6525.040148: sched_switch: prev_comm=ksoftirqd/2 prev_pid=21 prev_prio=120 prev_state=S ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/2:0-1188  [002] d...  6525.040187: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6525.111528: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6525.111552: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6525.111653: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6525.111666: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6525.111684: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6525.111685: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
            sshd-908   [000] d...  6525.111695: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...  6525.111699: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
          <idle>-0     [001] dnh.  6525.111761: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6525.111772: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6525.111775: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6525.111787: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6525.111788: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6525.111797: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6525.111945: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6525.120074: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [002] dns.  6525.120074: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6525.120108: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
          <idle>-0     [000] d...  6525.120116: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/2:0-1188  [002] d.h.  6525.120135: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
     kworker/2:0-1188  [002] d...  6525.120152: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/0:1-1261  [000] dn..  6525.120153: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6525.120157: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
          <idle>-0     [002] dnh.  6525.120171: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6525.120182: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/0:0-1059  [000] d.s.  6525.120186: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6525.120198: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/2:0-1188  [002] d...  6525.120245: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6525.120254: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
     kworker/0:1-1261  [000] d...  6525.120257: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...  6525.120260: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/2:0-1188  [002] d...  6525.120286: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6525.160096: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6525.160120: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6525.160183: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6525.263274: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  6525.263284: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6525.263301: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6525.263318: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6525.263362: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6525.282501: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6525.282525: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6525.282624: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6525.282636: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6525.282650: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6525.282652: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6525.282653: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6525.282666: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
          <idle>-0     [001] dnh.  6525.282727: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6525.282738: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6525.282741: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6525.282753: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6525.282755: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6525.282768: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6525.282913: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6525.380439: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] dnh.  6525.380449: sched_wakeup: comm=kworker/1:0 pid=1258 prio=120 target_cpu=001
          <idle>-0     [001] d...  6525.380463: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=1258 next_prio=120
     kworker/1:0-1258  [001] d...  6525.380479: sched_switch: prev_comm=kworker/1:0 prev_pid=1258 prev_prio=120 prev_state=I ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6525.380592: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6525.452459: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6525.452482: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6525.452579: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6525.452591: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6525.452604: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6525.452609: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6525.452610: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6525.452623: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
          <idle>-0     [001] dnh.  6525.452682: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6525.452694: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6525.452696: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6525.452708: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6525.452710: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6525.452723: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6525.452867: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6525.500100: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6525.500125: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6525.500175: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6525.663147: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] dnH.  6525.663156: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6525.663179: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6525.663279: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6525.663292: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6525.663305: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [003] dnh.  6525.663309: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6525.663322: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
    kworker/u8:2-119   [001] d...  6525.663327: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
     kworker/0:1-1261  [000] d...  6525.663341: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            bash-911   [003] dns.  6525.670109: sched_wakeup: comm=kworker/3:1 pid=40 prio=120 target_cpu=003
          <idle>-0     [002] dnh.  6525.670159: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
            bash-911   [003] d...  6525.670167: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=40 next_prio=120
          <idle>-0     [002] d...  6525.670173: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
     kworker/3:1-40    [003] d...  6525.670208: sched_switch: prev_comm=kworker/3:1 prev_pid=40 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=911 next_prio=120
       rcu_sched-10    [002] d...  6525.670216: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
            bash-911   [003] ....  6525.677818: sys_clone+0x14/0x3c <-ret_fast_syscall+0x0/0x28
            bash-911   [003] ....  6525.677838: <stack trace>
 => sys_clone+0x18/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0xbea878e0
            bash-911   [003] ....  6525.677841: _do_fork+0x14/0x438 <-sys_clone+0x34/0x3c
            bash-911   [003] ....  6525.677852: <stack trace>
 => _do_fork+0x18/0x438
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0xbea878e0
            bash-911   [003] ....  6525.677854: copy_process.part.5+0x14/0x1ad4 <-_do_fork+0xd8/0x438
            bash-911   [003] ....  6525.677864: <stack trace>
 => copy_process.part.5+0x18/0x1ad4
 => _do_fork+0xd8/0x438
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0xbea878e0
            bash-911   [003] ....  6525.678442: sched_process_fork: comm=bash pid=911 child_comm=bash child_pid=1268
          <idle>-0     [001] d...  6525.678480: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1268 next_prio=120
            bash-911   [003] d...  6525.678687: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6525.682528: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6525.682545: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
            bash-911   [003] d...  6525.682586: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-1268  [001] ....  6525.683200: do_exit+0x14/0xc18 <-do_group_exit+0x4c/0xe4
            bash-1268  [001] ....  6525.683220: <stack trace>
 => do_exit+0x18/0xc18
 => do_group_exit+0x4c/0xe4
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0xbea87a08
            bash-1268  [001] ....  6525.683952: sched_process_exit: comm=bash pid=1268 prio=120
          <idle>-0     [003] dnh.  6525.683988: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6525.683999: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
            bash-1268  [001] d...  6525.684019: signal_generate: sig=17 errno=0 code=1 comm=bash pid=911 grp=1 res=0
            bash-1268  [001] d...  6525.684030: sched_switch: prev_comm=bash prev_pid=1268 prev_prio=120 prev_state=Z ==> next_comm=swapper/1 next_pid=0 next_prio=120
            bash-911   [003] d...  6525.684043: signal_deliver: sig=17 errno=0 code=1 sa_handler=55a6c sa_flags=14000000
          <idle>-0     [001] dnh.  6525.685232: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6525.685242: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6525.685267: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
            bash-911   [003] d...  6525.685269: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6525.685271: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6525.685291: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6525.685503: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6525.690090: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6525.690137: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6525.690164: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6525.710081: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6525.710119: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6525.710155: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6525.730080: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6525.730116: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6525.730140: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6525.750080: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6525.750116: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6525.750173: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6525.770084: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] dnH.  6525.770093: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6525.770132: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/2:0-1188  [002] d...  6525.770152: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6525.770223: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6525.900102: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6525.900122: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6525.900171: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6525.920082: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6525.920114: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6525.920130: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6525.920140: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6525.920147: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6525.920162: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6525.920170: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6525.920176: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6525.920191: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6525.920199: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6525.920205: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6525.920220: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6525.920227: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6525.920233: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6525.920248: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6525.920256: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6525.920262: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6525.920277: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6525.981142: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6525.981160: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6525.981307: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6526.000082: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [001] dns.  6526.000086: sched_wakeup: comm=kworker/1:0 pid=1258 prio=120 target_cpu=001
          <idle>-0     [002] d...  6526.000119: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
          <idle>-0     [001] d...  6526.000136: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=1258 next_prio=120
     kworker/2:0-1188  [002] d...  6526.000139: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/1:0-1258  [001] d...  6526.000168: sched_switch: prev_comm=kworker/1:0 prev_pid=1258 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6526.096606: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] d...  6526.096622: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6526.096676: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6526.160085: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6526.160126: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d.s.  6526.160179: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [001] dnh.  6526.160219: sched_wakeup: comm=kworker/1:0 pid=1258 prio=120 target_cpu=001
          <idle>-0     [003] dnh.  6526.160227: sched_wakeup: comm=kworker/3:1 pid=40 prio=120 target_cpu=003
          <idle>-0     [001] d...  6526.160233: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=1258 next_prio=120
          <idle>-0     [003] d...  6526.160243: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=40 next_prio=120
     kworker/0:1-1261  [000] d...  6526.160245: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/1:0-1258  [001] d...  6526.160260: sched_switch: prev_comm=kworker/1:0 prev_pid=1258 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
     kworker/3:1-40    [003] d...  6526.160274: sched_switch: prev_comm=kworker/3:1 prev_pid=40 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6526.340108: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6526.340128: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6526.340176: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6526.581864: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] dnh.  6526.581874: sched_wakeup: comm=kworker/1:0 pid=1258 prio=120 target_cpu=001
          <idle>-0     [001] d...  6526.581889: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=1258 next_prio=120
     kworker/1:0-1258  [001] d...  6526.581904: sched_switch: prev_comm=kworker/1:0 prev_pid=1258 prev_prio=120 prev_state=I ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6526.581997: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6526.840112: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6526.840130: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6526.840164: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6526.960093: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6526.960130: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6526.960147: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6526.960151: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6526.960161: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6526.960172: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6526.960188: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6526.960191: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6526.960199: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6526.960208: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6526.960224: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6526.960227: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6526.960234: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6526.960243: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6526.960259: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6526.960262: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6526.960269: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6526.960278: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] dn..  6526.960294: sched_wakeup: comm=kworker/0:0 pid=1059 prio=120 target_cpu=000
     kworker/0:1-1261  [000] d...  6526.960297: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=kworker/0:0 next_pid=1059 next_prio=120
     kworker/0:0-1059  [000] d.h.  6526.960304: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/0:0-1059  [000] d...  6526.960313: sched_switch: prev_comm=kworker/0:0 prev_pid=1059 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6526.960345: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6526.990200: sched_wakeup: comm=ssh-agent pid=557 prio=120 target_cpu=003
          <idle>-0     [003] d...  6526.990216: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ssh-agent next_pid=557 next_prio=120
       ssh-agent-557   [003] d...  6526.990275: sched_switch: prev_comm=ssh-agent prev_pid=557 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6527.035096: sched_wakeup: comm=gmain pid=564 prio=120 target_cpu=000
          <idle>-0     [000] d...  6527.035113: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gmain next_pid=564 next_prio=120
           gmain-564   [000] d...  6527.035204: sched_switch: prev_comm=gmain prev_pid=564 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6527.040112: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] dns.  6527.040138: sched_wakeup: comm=ksoftirqd/2 pid=21 prio=120 target_cpu=002
          <idle>-0     [002] d...  6527.040150: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/2 next_pid=21 next_prio=120
     ksoftirqd/2-21    [002] d...  6527.040169: sched_switch: prev_comm=ksoftirqd/2 prev_pid=21 prev_prio=120 prev_state=S ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/2:0-1188  [002] d...  6527.040218: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6527.063276: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  6527.063286: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6527.063301: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6527.063316: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6527.063361: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6527.120102: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6527.120131: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6527.120163: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6527.141862: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] dns.  6527.141882: sched_wakeup: comm=ksoftirqd/0 pid=9 prio=120 target_cpu=000
          <idle>-0     [000] d...  6527.141897: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...  6527.141912: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6527.142041: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6527.142054: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
          <idle>-0     [003] dnh.  6527.142076: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
            sshd-908   [000] d...  6527.142086: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...  6527.142090: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
    kworker/u8:2-119   [001] d...  6527.142096: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6527.142172: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6527.142184: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6527.142189: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6527.142200: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6527.142202: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6527.142215: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6527.142380: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6527.182564: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] dnh.  6527.182574: sched_wakeup: comm=kworker/1:0 pid=1258 prio=120 target_cpu=001
          <idle>-0     [001] d...  6527.182588: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=1258 next_prio=120
     kworker/1:0-1258  [001] d...  6527.182604: sched_switch: prev_comm=kworker/1:0 prev_pid=1258 prev_prio=120 prev_state=I ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6527.182724: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6527.200096: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [002] dns.  6527.200098: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [000] d...  6527.200128: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [002] d...  6527.200135: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/0:1-1261  [000] d...  6527.200162: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/2:0-1188  [002] d.h.  6527.200164: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [000] dns.  6527.200190: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
     kworker/2:0-1188  [002] d...  6527.200192: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...  6527.200199: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6527.200220: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6527.340122: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6527.340141: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6527.340204: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6527.447986: sched_wakeup: comm=avahi-daemon pid=402 prio=120 target_cpu=002
          <idle>-0     [002] dnh.  6527.447995: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6527.448009: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/2:0-1188  [002] d...  6527.448025: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=avahi-daemon next_pid=402 next_prio=120
    avahi-daemon-402   [002] d...  6527.448399: sched_switch: prev_comm=avahi-daemon prev_pid=402 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6527.548464: sched_wakeup: comm=avahi-daemon pid=402 prio=120 target_cpu=002
          <idle>-0     [002] dnh.  6527.548474: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6527.548489: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/2:0-1188  [002] d...  6527.548504: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=avahi-daemon next_pid=402 next_prio=120
    avahi-daemon-402   [002] d...  6527.548630: sched_switch: prev_comm=avahi-daemon prev_pid=402 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6527.589051: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6527.589076: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6527.589187: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6527.589201: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6527.589219: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6527.589222: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
            sshd-908   [000] d...  6527.589232: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...  6527.589237: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
          <idle>-0     [001] dnh.  6527.589312: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6527.589324: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6527.589328: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6527.589339: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6527.589340: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6527.589349: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6527.589507: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dns.  6527.600105: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] dns.  6527.600115: sched_wakeup: comm=kworker/1:0 pid=1258 prio=120 target_cpu=001
          <idle>-0     [001] d...  6527.600159: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=1258 next_prio=120
     kworker/1:0-1258  [001] d...  6527.600184: sched_switch: prev_comm=kworker/1:0 prev_pid=1258 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6527.600269: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6527.693388: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] dnH.  6527.693397: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] dns.  6527.693416: sched_wakeup: comm=ksoftirqd/0 pid=9 prio=120 target_cpu=000
          <idle>-0     [000] d...  6527.693432: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...  6527.693447: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6527.693545: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6527.693558: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6527.693569: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [003] dnh.  6527.693576: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6527.693590: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
    kworker/u8:2-119   [001] d...  6527.693625: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
     kworker/0:1-1261  [000] d...  6527.693634: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6527.693658: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6527.693669: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6527.693685: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
            bash-911   [003] d...  6527.693686: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6527.693687: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6527.693700: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6527.693848: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6527.783269: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6527.783285: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6527.783393: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6527.840126: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6527.840146: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6527.840183: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6527.846606: sched_wakeup: comm=rngd pid=383 prio=120 target_cpu=000
          <idle>-0     [000] d...  6527.846622: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=383 next_prio=120
            rngd-383   [000] d...  6527.846636: sched_switch: prev_comm=rngd prev_pid=383 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6527.859792: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6527.859815: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6527.859914: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6527.859927: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6527.859938: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6527.859944: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6527.859946: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6527.859959: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
          <idle>-0     [001] dnh.  6527.860023: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6527.860035: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6527.860037: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6527.860050: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6527.860051: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6527.860064: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6527.860247: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6527.976289: sched_wakeup: comm=thd pid=378 prio=120 target_cpu=000
          <idle>-0     [000] dnh.  6527.976299: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6527.976315: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=thd next_pid=378 next_prio=120
             thd-378   [000] d...  6527.976348: sched_switch: prev_comm=thd prev_pid=378 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6527.976412: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6528.000105: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6528.000137: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6528.000158: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6528.000168: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6528.000174: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6528.000190: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6528.000198: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6528.000204: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6528.000219: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6528.000226: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6528.000232: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6528.000248: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6528.000257: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6528.000263: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6528.000278: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6528.000286: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6528.000292: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6528.000307: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6528.080125: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6528.080144: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6528.080161: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6528.094168: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6528.094189: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6528.094287: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6528.094300: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6528.094312: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6528.094315: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6528.094317: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6528.094330: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
            bash-911   [003] dns.  6528.100139: sched_wakeup: comm=kworker/3:1 pid=40 prio=120 target_cpu=003
          <idle>-0     [002] dnh.  6528.100189: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
            bash-911   [003] d...  6528.100194: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=40 next_prio=120
          <idle>-0     [002] d...  6528.100204: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
     kworker/3:1-40    [003] d...  6528.100226: sched_switch: prev_comm=kworker/3:1 prev_pid=40 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=911 next_prio=120
       rcu_sched-10    [002] d...  6528.100287: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
            bash-911   [003] ....  6528.108564: sys_clone+0x14/0x3c <-ret_fast_syscall+0x0/0x28
            bash-911   [003] ....  6528.108585: <stack trace>
 => sys_clone+0x18/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0xbea878e0
            bash-911   [003] ....  6528.108588: _do_fork+0x14/0x438 <-sys_clone+0x34/0x3c
            bash-911   [003] ....  6528.108598: <stack trace>
 => _do_fork+0x18/0x438
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0xbea878e0
            bash-911   [003] ....  6528.108601: copy_process.part.5+0x14/0x1ad4 <-_do_fork+0xd8/0x438
            bash-911   [003] ....  6528.108612: <stack trace>
 => copy_process.part.5+0x18/0x1ad4
 => _do_fork+0xd8/0x438
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0xbea878e0
            bash-911   [003] ....  6528.109191: sched_process_fork: comm=bash pid=911 child_comm=bash child_pid=1269
          <idle>-0     [000] d...  6528.109233: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1269 next_prio=120
            bash-911   [003] d...  6528.109442: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] dnh.  6528.113440: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6528.113456: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
            bash-911   [003] d...  6528.113499: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-1269  [000] ....  6528.114111: do_exit+0x14/0xc18 <-do_group_exit+0x4c/0xe4
            bash-1269  [000] ....  6528.114132: <stack trace>
 => do_exit+0x18/0xc18
 => do_group_exit+0x4c/0xe4
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0xbea87a08
            bash-1269  [000] ....  6528.114874: sched_process_exit: comm=bash pid=1269 prio=120
          <idle>-0     [003] dnh.  6528.114910: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6528.114921: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
            bash-1269  [000] d...  6528.114940: signal_generate: sig=17 errno=0 code=1 comm=bash pid=911 grp=1 res=0
            bash-1269  [000] d...  6528.114951: sched_switch: prev_comm=bash prev_pid=1269 prev_prio=120 prev_state=Z ==> next_comm=swapper/0 next_pid=0 next_prio=120
            bash-911   [003] d...  6528.114966: signal_deliver: sig=17 errno=0 code=1 sa_handler=55a6c sa_flags=14000000
          <idle>-0     [001] dnh.  6528.116158: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6528.116177: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            bash-911   [003] d...  6528.116192: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6528.116198: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.  6528.116201: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6528.116211: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
            sshd-908   [000] d...  6528.116453: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6528.120119: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6528.120169: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6528.120196: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6528.140109: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6528.140146: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6528.140191: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6528.160109: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6528.160145: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6528.160168: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6528.180110: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] dnH.  6528.180120: sched_wakeup: comm=kworker/2:0 pid=1188 prio=120 target_cpu=002
          <idle>-0     [002] d...  6528.180157: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:0 next_pid=1188 next_prio=120
     kworker/2:0-1188  [002] d...  6528.180176: sched_switch: prev_comm=kworker/2:0 prev_pid=1188 prev_prio=120 prev_state=I ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6528.180224: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6528.200109: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6528.200144: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6528.200163: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6528.240112: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6528.240157: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d.s.  6528.240213: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [003] dnh.  6528.240256: sched_wakeup: comm=kworker/3:1 pid=40 prio=120 target_cpu=003
          <idle>-0     [003] d...  6528.240272: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=40 next_prio=120
     kworker/0:1-1261  [000] d...  6528.240296: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/3:1-40    [003] d...  6528.240302: sched_switch: prev_comm=kworker/3:1 prev_pid=40 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] dnH.  6528.330130: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] d...  6528.330149: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
     kworker/0:1-1261  [000] d...  6528.330197: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6528.383956: sched_wakeup: comm=lxpanel pid=587 prio=120 target_cpu=001
          <idle>-0     [001] d...  6528.383972: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=587 next_prio=120
         lxpanel-587   [001] d...  6528.384093: sched_switch: prev_comm=lxpanel prev_pid=587 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6528.480235: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] dnH.  6528.480243: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
          <idle>-0     [000] dns.  6528.480262: sched_wakeup: comm=ksoftirqd/0 pid=9 prio=120 target_cpu=000
          <idle>-0     [000] d...  6528.480278: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120
     ksoftirqd/0-9     [000] d...  6528.480294: sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=sshd next_pid=908 next_prio=120
          <idle>-0     [001] dnh.  6528.480409: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6528.480422: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
            sshd-908   [000] d...  6528.480433: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
          <idle>-0     [003] dnh.  6528.480441: sched_wakeup: comm=bash pid=911 prio=120 target_cpu=003
          <idle>-0     [003] d...  6528.480456: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=911 next_prio=120
    kworker/u8:2-119   [001] d...  6528.480478: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
     kworker/0:1-1261  [000] d...  6528.480488: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6528.480500: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6528.480511: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
          <idle>-0     [000] dnh.  6528.480531: sched_wakeup: comm=sshd pid=908 prio=120 target_cpu=000
          <idle>-0     [000] d...  6528.480546: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=908 next_prio=120
    kworker/u8:2-119   [001] d...  6528.480552: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
            sshd-908   [000] d...  6528.480721: sched_switch: prev_comm=sshd prev_pid=908 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
            bash-911   [003] ....  6528.481314: sys_clone+0x14/0x3c <-ret_fast_syscall+0x0/0x28
            bash-911   [003] ....  6528.481333: <stack trace>
 => sys_clone+0x18/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0xbea89780
            bash-911   [003] ....  6528.481336: _do_fork+0x14/0x438 <-sys_clone+0x34/0x3c
            bash-911   [003] ....  6528.481345: <stack trace>
 => _do_fork+0x18/0x438
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0xbea89780
            bash-911   [003] ....  6528.481347: copy_process.part.5+0x14/0x1ad4 <-_do_fork+0xd8/0x438
            bash-911   [003] ....  6528.481357: <stack trace>
 => copy_process.part.5+0x18/0x1ad4
 => _do_fork+0xd8/0x438
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0xbea89780
            bash-911   [003] ....  6528.481924: sched_process_fork: comm=bash pid=911 child_comm=bash child_pid=1270
          <idle>-0     [001] d...  6528.481960: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1270 next_prio=120
            bash-911   [003] d...  6528.482691: sched_switch: prev_comm=bash prev_pid=911 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] dnh.  6528.490185: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6528.490206: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6528.490226: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
            sudo-1270  [001] dn..  6528.505418: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
            sudo-1270  [001] d...  6528.505435: sched_switch: prev_comm=sudo prev_pid=1270 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] ....  6528.505447: _do_fork+0x14/0x438 <-kernel_thread+0x40/0x48
    kworker/u8:2-119   [001] ....  6528.505472: <stack trace>
 => _do_fork+0x18/0x438
 => kernel_thread+0x40/0x48
 => call_usermodehelper_exec_work+0x8c/0xe8
 => process_one_work+0x170/0x458
 => worker_thread+0x5c/0x5a4
 => kthread+0x138/0x168
 => ret_from_fork+0x14/0x28
 => 0
    kworker/u8:2-119   [001] ....  6528.505475: copy_process.part.5+0x14/0x1ad4 <-_do_fork+0xd8/0x438
    kworker/u8:2-119   [001] ....  6528.505491: <stack trace>
 => copy_process.part.5+0x18/0x1ad4
 => _do_fork+0xd8/0x438
 => kernel_thread+0x40/0x48
 => call_usermodehelper_exec_work+0x8c/0xe8
 => process_one_work+0x170/0x458
 => worker_thread+0x5c/0x5a4
 => kthread+0x138/0x168
 => ret_from_fork+0x14/0x28
 => 0
    kworker/u8:2-119   [001] ....  6528.505562: sched_process_fork: comm=kworker/u8:2 pid=119 child_comm=kworker/u8:2 child_pid=1271
    kworker/u8:2-119   [001] d...  6528.505589: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=S ==> next_comm=sudo next_pid=1270 next_prio=120
          <idle>-0     [002] d...  6528.505597: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1271 next_prio=120
            sudo-1270  [001] d...  6528.505679: sched_switch: prev_comm=sudo prev_pid=1270 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
        modprobe-1271  [002] dns.  6528.510143: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
        modprobe-1271  [002] d...  6528.510193: sched_switch: prev_comm=modprobe prev_pid=1271 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6528.510225: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=modprobe next_pid=1271 next_prio=120
        modprobe-1271  [002] ....  6528.515999: do_exit+0x14/0xc18 <-do_group_exit+0x4c/0xe4
        modprobe-1271  [002] ....  6528.516022: <stack trace>
 => do_exit+0x18/0xc18
 => do_group_exit+0x4c/0xe4
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0xbea6ed38
        modprobe-1271  [002] ....  6528.516576: sched_process_exit: comm=modprobe pid=1271 prio=120
        modprobe-1271  [002] d...  6528.516638: signal_generate: sig=17 errno=0 code=1 comm=kworker/u8:2 pid=119 grp=1 res=1
          <idle>-0     [001] dnh.  6528.516659: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6528.516673: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
        modprobe-1271  [002] d...  6528.516704: sched_switch: prev_comm=modprobe prev_pid=1271 prev_prio=120 prev_state=X ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u8:2-119   [001] d...  6528.516752: sched_wakeup: comm=sudo pid=1270 prio=120 target_cpu=001
    kworker/u8:2-119   [001] d...  6528.516764: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=sudo next_pid=1270 next_prio=120
          <idle>-0     [003] dnh.  6528.517048: sched_wakeup: comm=systemd-journal pid=110 prio=120 target_cpu=003
          <idle>-0     [003] d...  6528.517060: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=110 next_prio=120
            sudo-1270  [001] dn..  6528.517180: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
            sudo-1270  [001] d...  6528.517192: sched_switch: prev_comm=sudo prev_pid=1270 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] ....  6528.517201: _do_fork+0x14/0x438 <-kernel_thread+0x40/0x48
    kworker/u8:2-119   [001] ....  6528.517220: <stack trace>
 => _do_fork+0x18/0x438
 => kernel_thread+0x40/0x48
 => call_usermodehelper_exec_work+0x8c/0xe8
 => process_one_work+0x170/0x458
 => worker_thread+0x5c/0x5a4
 => kthread+0x138/0x168
 => ret_from_fork+0x14/0x28
 => 0
    kworker/u8:2-119   [001] ....  6528.517223: copy_process.part.5+0x14/0x1ad4 <-_do_fork+0xd8/0x438
    kworker/u8:2-119   [001] ....  6528.517237: <stack trace>
 => copy_process.part.5+0x18/0x1ad4
 => _do_fork+0xd8/0x438
 => kernel_thread+0x40/0x48
 => call_usermodehelper_exec_work+0x8c/0xe8
 => process_one_work+0x170/0x458
 => worker_thread+0x5c/0x5a4
 => kthread+0x138/0x168
 => ret_from_fork+0x14/0x28
 => 0
    kworker/u8:2-119   [001] ....  6528.517298: sched_process_fork: comm=kworker/u8:2 pid=119 child_comm=kworker/u8:2 child_pid=1272
    kworker/u8:2-119   [001] d...  6528.517320: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=S ==> next_comm=sudo next_pid=1270 next_prio=120
            sudo-1270  [001] d...  6528.517368: sched_switch: prev_comm=sudo prev_pid=1270 prev_prio=120 prev_state=D ==> next_comm=kworker/u8:2 next_pid=1272 next_prio=120
        modprobe-1272  [001] dn..  6528.517412: sched_wakeup: comm=migration/1 pid=15 prio=0 target_cpu=001
        modprobe-1272  [001] d...  6528.517419: sched_switch: prev_comm=kworker/u8:2 prev_pid=1272 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [000] d...  6528.517457: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1272 next_prio=120
     migration/1-15    [001] d...  6528.517460: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
 systemd-journal-110   [003] d...  6528.518812: sched_wakeup: comm=in:imuxsock pid=428 prio=120 target_cpu=003
 systemd-journal-110   [003] d...  6528.519432: sched_switch: prev_comm=systemd-journal prev_pid=110 prev_prio=120 prev_state=S ==> next_comm=in:imuxsock next_pid=428 next_prio=120
     in:imuxsock-428   [003] d...  6528.519557: sched_wakeup: comm=rs:main Q:Reg pid=430 prio=120 target_cpu=003
     in:imuxsock-428   [003] d...  6528.519578: sched_switch: prev_comm=in:imuxsock prev_pid=428 prev_prio=120 prev_state=S ==> next_comm=rs:main Q:Reg next_pid=430 next_prio=120
   rs:main Q:Reg-430   [003] d...  6528.519747: sched_switch: prev_comm=rs:main Q:Reg prev_pid=430 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
        modprobe-1272  [000] ....  6528.527868: do_exit+0x14/0xc18 <-do_group_exit+0x4c/0xe4
        modprobe-1272  [000] ....  6528.527891: <stack trace>
 => do_exit+0x18/0xc18
 => do_group_exit+0x4c/0xe4
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0xbec22d38
        modprobe-1272  [000] ....  6528.528439: sched_process_exit: comm=modprobe pid=1272 prio=120
        modprobe-1272  [000] d...  6528.528505: signal_generate: sig=17 errno=0 code=1 comm=kworker/u8:2 pid=119 grp=1 res=1
        modprobe-1272  [000] d...  6528.528525: sched_switch: prev_comm=modprobe prev_pid=1272 prev_prio=120 prev_state=Z ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6528.528528: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6528.528541: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6528.528617: sched_wakeup: comm=sudo pid=1270 prio=120 target_cpu=001
    kworker/u8:2-119   [001] d...  6528.528630: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=sudo next_pid=1270 next_prio=120
            sudo-1270  [001] dn..  6528.529250: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
            sudo-1270  [001] d...  6528.529261: sched_switch: prev_comm=sudo prev_pid=1270 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] ....  6528.529271: _do_fork+0x14/0x438 <-kernel_thread+0x40/0x48
    kworker/u8:2-119   [001] ....  6528.529289: <stack trace>
 => _do_fork+0x18/0x438
 => kernel_thread+0x40/0x48
 => call_usermodehelper_exec_work+0x8c/0xe8
 => process_one_work+0x170/0x458
 => worker_thread+0x5c/0x5a4
 => kthread+0x138/0x168
 => ret_from_fork+0x14/0x28
 => 0
    kworker/u8:2-119   [001] ....  6528.529291: copy_process.part.5+0x14/0x1ad4 <-_do_fork+0xd8/0x438
    kworker/u8:2-119   [001] ....  6528.529304: <stack trace>
 => copy_process.part.5+0x18/0x1ad4
 => _do_fork+0xd8/0x438
 => kernel_thread+0x40/0x48
 => call_usermodehelper_exec_work+0x8c/0xe8
 => process_one_work+0x170/0x458
 => worker_thread+0x5c/0x5a4
 => kthread+0x138/0x168
 => ret_from_fork+0x14/0x28
 => 0
    kworker/u8:2-119   [001] ....  6528.529365: sched_process_fork: comm=kworker/u8:2 pid=119 child_comm=kworker/u8:2 child_pid=1273
    kworker/u8:2-119   [001] d...  6528.529388: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=S ==> next_comm=sudo next_pid=1270 next_prio=120
          <idle>-0     [002] d...  6528.529391: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1273 next_prio=120
            sudo-1270  [001] d...  6528.529432: sched_switch: prev_comm=sudo prev_pid=1270 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
        modprobe-1273  [002] dns.  6528.530135: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
        modprobe-1273  [002] d...  6528.530170: sched_switch: prev_comm=modprobe prev_pid=1273 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6528.530198: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=modprobe next_pid=1273 next_prio=120
        modprobe-1273  [002] ....  6528.539699: do_exit+0x14/0xc18 <-do_group_exit+0x4c/0xe4
        modprobe-1273  [002] ....  6528.539723: <stack trace>
 => do_exit+0x18/0xc18
 => do_group_exit+0x4c/0xe4
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0xbed91d38
        modprobe-1273  [002] ....  6528.540330: sched_process_exit: comm=modprobe pid=1273 prio=120
        modprobe-1273  [002] d...  6528.540392: signal_generate: sig=17 errno=0 code=1 comm=kworker/u8:2 pid=119 grp=1 res=1
        modprobe-1273  [002] d...  6528.540410: sched_switch: prev_comm=modprobe prev_pid=1273 prev_prio=120 prev_state=Z ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6528.540410: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6528.540422: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6528.540494: sched_wakeup: comm=sudo pid=1270 prio=120 target_cpu=001
    kworker/u8:2-119   [001] d...  6528.540506: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=sudo next_pid=1270 next_prio=120
          <idle>-0     [003] dnh.  6528.541146: sched_wakeup: comm=systemd-journal pid=110 prio=120 target_cpu=003
          <idle>-0     [003] d...  6528.541158: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=110 next_prio=120
            sudo-1270  [001] dn..  6528.541165: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
            sudo-1270  [001] d...  6528.541177: sched_switch: prev_comm=sudo prev_pid=1270 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] ....  6528.541185: _do_fork+0x14/0x438 <-kernel_thread+0x40/0x48
    kworker/u8:2-119   [001] ....  6528.541202: <stack trace>
 => _do_fork+0x18/0x438
 => kernel_thread+0x40/0x48
 => call_usermodehelper_exec_work+0x8c/0xe8
 => process_one_work+0x170/0x458
 => worker_thread+0x5c/0x5a4
 => kthread+0x138/0x168
 => ret_from_fork+0x14/0x28
 => 0
    kworker/u8:2-119   [001] ....  6528.541204: copy_process.part.5+0x14/0x1ad4 <-_do_fork+0xd8/0x438
    kworker/u8:2-119   [001] ....  6528.541217: <stack trace>
 => copy_process.part.5+0x18/0x1ad4
 => _do_fork+0xd8/0x438
 => kernel_thread+0x40/0x48
 => call_usermodehelper_exec_work+0x8c/0xe8
 => process_one_work+0x170/0x458
 => worker_thread+0x5c/0x5a4
 => kthread+0x138/0x168
 => ret_from_fork+0x14/0x28
 => 0
    kworker/u8:2-119   [001] ....  6528.541284: sched_process_fork: comm=kworker/u8:2 pid=119 child_comm=kworker/u8:2 child_pid=1274
    kworker/u8:2-119   [001] d...  6528.541307: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=S ==> next_comm=sudo next_pid=1270 next_prio=120
          <idle>-0     [000] d...  6528.541309: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1274 next_prio=120
            sudo-1270  [001] d...  6528.541349: sched_switch: prev_comm=sudo prev_pid=1270 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
 systemd-journal-110   [003] dn..  6528.542599: sched_wakeup: comm=in:imuxsock pid=428 prio=120 target_cpu=003
 systemd-journal-110   [003] d...  6528.542616: sched_switch: prev_comm=systemd-journal prev_pid=110 prev_prio=120 prev_state=R ==> next_comm=in:imuxsock next_pid=428 next_prio=120
     in:imuxsock-428   [003] d...  6528.542720: sched_wakeup: comm=rs:main Q:Reg pid=430 prio=120 target_cpu=003
     in:imuxsock-428   [003] d...  6528.542740: sched_switch: prev_comm=in:imuxsock prev_pid=428 prev_prio=120 prev_state=S ==> next_comm=rs:main Q:Reg next_pid=430 next_prio=120
   rs:main Q:Reg-430   [003] d...  6528.542862: sched_switch: prev_comm=rs:main Q:Reg prev_pid=430 prev_prio=120 prev_state=S ==> next_comm=systemd-journal next_pid=110 next_prio=120
 systemd-journal-110   [003] d...  6528.543469: sched_switch: prev_comm=systemd-journal prev_pid=110 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] dns.  6528.550141: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [002] d...  6528.550196: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6528.550221: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
        modprobe-1274  [000] ....  6528.551762: do_exit+0x14/0xc18 <-do_group_exit+0x4c/0xe4
        modprobe-1274  [000] ....  6528.551785: <stack trace>
 => do_exit+0x18/0xc18
 => do_group_exit+0x4c/0xe4
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0xbebadd38
        modprobe-1274  [000] ....  6528.552338: sched_process_exit: comm=modprobe pid=1274 prio=120
        modprobe-1274  [000] d...  6528.552396: signal_generate: sig=17 errno=0 code=1 comm=kworker/u8:2 pid=119 grp=1 res=1
        modprobe-1274  [000] d...  6528.552412: sched_switch: prev_comm=modprobe prev_pid=1274 prev_prio=120 prev_state=Z ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6528.552415: sched_wakeup: comm=kworker/u8:2 pid=119 prio=120 target_cpu=001
          <idle>-0     [001] d...  6528.552426: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=119 next_prio=120
    kworker/u8:2-119   [001] d...  6528.552499: sched_wakeup: comm=sudo pid=1270 prio=120 target_cpu=001
    kworker/u8:2-119   [001] d...  6528.552510: sched_switch: prev_comm=kworker/u8:2 prev_pid=119 prev_prio=120 prev_state=I ==> next_comm=sudo next_pid=1270 next_prio=120
            sudo-1270  [001] ....  6528.552598: sys_clone+0x14/0x3c <-ret_fast_syscall+0x0/0x28
            sudo-1270  [001] ....  6528.552608: <stack trace>
 => sys_clone+0x18/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0xbe8820f0
            sudo-1270  [001] ....  6528.552611: _do_fork+0x14/0x438 <-sys_clone+0x34/0x3c
            sudo-1270  [001] ....  6528.552619: <stack trace>
 => _do_fork+0x18/0x438
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0xbe8820f0
            sudo-1270  [001] ....  6528.552621: copy_process.part.5+0x14/0x1ad4 <-_do_fork+0xd8/0x438
            sudo-1270  [001] ....  6528.552630: <stack trace>
 => copy_process.part.5+0x18/0x1ad4
 => _do_fork+0xd8/0x438
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0xbe8820f0
            sudo-1270  [001] ....  6528.553752: sched_process_fork: comm=sudo pid=1270 child_comm=sudo child_pid=1275
          <idle>-0     [002] d...  6528.553781: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sudo next_pid=1275 next_prio=120
            sudo-1270  [001] d...  6528.554309: sched_switch: prev_comm=sudo prev_pid=1270 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] dnh.  6528.556754: sched_wakeup: comm=sudo pid=1270 prio=120 target_cpu=001
          <idle>-0     [001] d...  6528.556769: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sudo next_pid=1270 next_prio=120
            sudo-1270  [001] d...  6528.556829: sched_switch: prev_comm=sudo prev_pid=1270 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dns.  6528.560138: sched_wakeup: comm=kworker/0:1 pid=1261 prio=120 target_cpu=000
            bash-1275  [002] dnh.  6528.560198: sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002
          <idle>-0     [000] d...  6528.560205: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=1261 next_prio=120
            bash-1275  [002] d...  6528.560216: sched_switch: prev_comm=bash prev_pid=1275 prev_prio=120 prev_state=R+ ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...  6528.560245: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1275 next_prio=120
     kworker/0:1-1261  [000] d...  6528.560256: sched_switch: prev_comm=kworker/0:1 prev_pid=1261 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
