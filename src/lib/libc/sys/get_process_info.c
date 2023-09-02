#include <nanvix/syscall.h>
#include <errno.h>
int get_process_info(int i)
{
    int ret;

    __asm__ volatile(
        "int $0x80"
        : "=a"(ret)
        : "0"(NR_getpi),
          "b"(i));

    /* Error. */
    if (ret < 0)
    {
        errno = -ret;
        return (-1);
    }

    return (ret);
}