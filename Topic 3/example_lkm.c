#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
 
MODULE_LICENSE("GPL");
MODULE_AUTHOR("edison");
MODULE_DESCRIPTION("Kernel Module Example");
MODULE_VERSION("0.1");
 
// 加载时调用 
static int __init example_init(void)
{
    printk(KERN_INFO "Hello, world!\n");
    return 0;
}
 
// 卸载时调用
static void __exit example_exit(void)
{
    printk(KERN_INFO "Goodbye, world!\n");
}
 
module_init(example_init);
module_exit(example_exit);