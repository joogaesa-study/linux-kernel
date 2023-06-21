#! /usr/bin/env bash

set -o errexit

echo 0 > /sys/kernel/debug/tracing/tracing_on
sleep 3
echo "ftrace off"

cp /sys/kernel/debug/tracing/trace .
mv trace ftrace_log.c

