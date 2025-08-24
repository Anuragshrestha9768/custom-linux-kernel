// kernel/my_syscall.c
#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE1(my_syscall, int x)
{
    printk(KERN_INFO "my_syscall called with %d\n", x);
    return x * 42;
}
