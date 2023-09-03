#include <nanvix/pm.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(int argc, char *const argv[])
{
    struct process_buf buf;
    pid_t pid = 0;
    for (int i = 1; i < argc; i++)
    {
        if (!strcmp(argv[i], "--help"))
        {
            printf("Digite: getpi <Numero do ID desejado>\n");
            return (EXIT_SUCCESS);
        }
        else
            pid = atoi(argv[i]);
    }
    if (get_process_info(pid, &buf) == -1)
    {
        printf("Informe outro ID\n");
        return (errno);
    }
    printf("Informacoes sobre o processo encontrado:\n");
    printf("ID: %d\n", buf.pid);
    printf("Estado atual: %u\n", buf.state);
    printf("Tempo de usuario: %u\n", buf.utime);
    printf("Tempo de Kernel: %u\n", buf.ktime);
    printf("Prioridade do processo: %d\n", buf.priority);
    return (EXIT_SUCCESS);
}