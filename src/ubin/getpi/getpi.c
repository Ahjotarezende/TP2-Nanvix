#include <nanvix/pm.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

int main(int argc, char *const argv[])
{
    int i = 2;
    (void)argc;
    (void)argv;
    get_process_info(i);
    return (EXIT_SUCCESS);
}