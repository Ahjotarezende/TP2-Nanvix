#include <nanvix/syscall.h>
#include <errno.h>
#include <nanvix/pm.h>
int get_process_info(pid_t pid, struct process_buf *buf)
{
    int ret;

    __asm__ volatile(
        "int $0x80"
        : "=a"(ret)
        : "0"(NR_getpi),
          "b"(pid),
          "c"(buf));

    /* Error. */
    if (ret < 0)
    {
        errno = -ret;
        return (-1);
    }

    return (ret);
}