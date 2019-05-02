#ifndef _LINUX_SCHED_WRR_H
#define _LINUX_SCHED_WRR_H

#include <linux/sched.h>

struct task_struct;

#define WRR_TIMESLICE 1 //TODO
#define WRR_MINWEIGHT 1
#define WRR_MAXWEIGHT 20

#endif  /* _LINUX_SCHED_WRR_H */
