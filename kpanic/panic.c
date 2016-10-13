#ifdef __KERNEL__

#include <linux/module.h>
#include <linux/kernel.h>

static int __init panic_init(void) {
	panic ("force-panic");
	return 0;
}

static void __exit panic_exit(void) { }

module__init(__init);
module__exit(__exit);

#endif
