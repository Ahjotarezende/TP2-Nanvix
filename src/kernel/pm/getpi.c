#include <nanvix/pm.h>
PUBLIC int sys_get_process_info(int i)
{
    return do_get_process_info(i);
}