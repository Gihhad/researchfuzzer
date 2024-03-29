/*
 * SYSCALL_DEFINE1(inotify_init1, int, flags)
 */

#define IN_CLOEXEC 02000000
#define IN_NONBLOCK 04000

#include "sanitise.h"

static unsigned long inotify_init1_flags[] = {
	IN_CLOEXEC , IN_NONBLOCK,
};

struct syscallentry syscall_inotify_init1 = {
	.name = "inotify_init1",
	.num_args = 1,
	.arg1name = "flags",
	.arg1type = ARG_LIST,
	.arg1list = ARGLIST(inotify_init1_flags),
	.group = GROUP_VFS,
};
