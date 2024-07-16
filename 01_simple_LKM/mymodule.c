#include <linux/module.h>
#include <linux/init.h>

/* Meta Information */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Shaun Lin TW");
MODULE_DESCRIPTION("A simple Hello World LKM(Linux Kernel Module)");

/**
 * @brief This function is called, when the module is loaded into the kernel
 */
static int __init my_init(void) {
	printk("Hello, Shaun!\n");
	return 0;
}

/**
 * @brief This function is called, when the module is removed from the kernel
 */
static void __exit my_exit(void) {
	printk("Goodbye, Shaun...\n");
}

module_init(my_init);
module_exit(my_exit);


