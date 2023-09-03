#include <nanvix/pm.h>
/*Funcao responsavel por fazer a chamada de Kernel
  aqui ja estamos fora do espaco de usuario
*/
PUBLIC int sys_get_process_info(pid_t pid, struct process_buf *buf)
{
    return do_get_process_info(pid, buf);
}