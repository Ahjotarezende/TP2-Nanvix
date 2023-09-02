#include <nanvix/pm.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

int main(int argc, char *const argv[])
{
    struct process_buf buffer;
    pid_t pid = 0;
    for (int i = 1; i < argc; i++)
    {
        pid = atoi(argv[i]);
    }
    if (get_process_info(pid, &buffer) < 0)
    {

        printf("Informe outro ID\n");
        return (errno);
    }
    return (EXIT_SUCCESS);
}