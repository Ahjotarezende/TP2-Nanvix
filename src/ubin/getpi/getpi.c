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
        /*Responsavel pelo comando de ajuda*/
        if (!strcmp(argv[i], "--help"))
        {
            printf("Digite: getpi <Numero do ID desejado>\n");
            return (EXIT_SUCCESS);
        }
        /*Converte o ID digitado em inteiro*/
        else
            pid = atoi(argv[i]);
    }
    /*Tratamento para PID == 0 caso o valor de entrada seja um string(abcdef)*/
    if (get_process_info(pid, &buf) == -1 || pid == 0)
    {
        /*Caso o ID seja invalido*/
        printf("Informe outro ID\n");
        return (errno);
    }
    /*Caso o ID seja valido, mostramos as informacoes encontradas*/
    printf("Informacoes sobre o processo encontrado:\n");
    printf("ID: %d\n", buf.pid);
    printf("Estado atual: %u\n", buf.state);
    printf("Tempo de usuario: %u\n", buf.utime);
    printf("Tempo de Kernel: %u\n", buf.ktime);
    printf("Prioridade do processo: %d\n", buf.priority);
    return (EXIT_SUCCESS);
}