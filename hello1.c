#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#define AUTHOR "CODE CROSSING"
#define DESCRIPTION "This is a test"
#define SUPPORTED "Test Device"

MODULE_LICENSE ("GPL");
MODULE_AUTHOR (AUTHOR);
MODULE_DESCRIPTION (DESCRIPTION);
MODULE_SUPPORTED_DEVICE (SUPPORTED);

static int __init example_2_init (void)
{
	printk (KERN_INFO "The first module2\n");
	return 0;
}

static void __exit example_2_exit (void)
{
	printk (KERN_INFO "The module has uninstalled2\n");
}

module_init (example_2_init);
module_exit (example_2_exit);
