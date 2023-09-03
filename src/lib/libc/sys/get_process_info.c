#include <nanvix/syscall.h>
#include <errno.h>
#include <nanvix/pm.h>
/*Funcao responsavel por invocar a chamada de Kernel criada*/
int get_process_info(pid_t pid, struct process_buf *buf)
{
    int ret;

    __asm__ volatile(
        "int $0x80"
        : "=a"(ret)
        : "0"(NR_getpi), // Numero identificador da funcao que estamos buscando no kernel
          "b"(pid),      // PID do processo sendo passado como primeiro parametro
          "c"(buf));     // Buffer onde guardaremos as informacoes sendo passado como segundo parametro

    /* Error. */
    if (ret < 0)
    {
        errno = -ret;
        return (-1);
    }

    return (ret);
}