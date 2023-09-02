#include <nanvix/pm.h>
PUBLIC int sys_get_process_info(pid_t pid, struct process_buf *buf)
{
    return do_get_process_info(pid, buf);
}