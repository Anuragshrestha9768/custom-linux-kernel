#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

#define __NR_my_syscall 548

int main() {
    int res = syscall(__NR_my_syscall, 5);
    printf("Result: %d\n", res);
    return 0;
}
