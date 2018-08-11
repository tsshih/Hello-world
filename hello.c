#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void)
{
	// KERN_ALERT is defined in /include/linux/kernel.h
	// printk(const char *fmt...)
	// #define KERN_ALERT	"<1>"
	// it is about message level
	printk(KERN_ALERT "hello: driver loaded!!\n");
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "hello: driver unloaded\n");
}

// entry point of 'insmod' and 'modprobe' 
module_init(hello_init);
// 'rmmod'
module_exit(hello_exit);
