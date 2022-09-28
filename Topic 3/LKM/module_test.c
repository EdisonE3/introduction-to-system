#include <linux/module.h>    // included for all kernel modules
#include <linux/kernel.h>    // included for KERN_INFO
#include <linux/init.h>      // included for __init and __exit macros
#include <asm/io.h>
#include <linux/slab.h>
#include <linux/cdev.h>
#include <linux/fs.h>

#define PL011_REGISTER_ADDR               0x9000000
#define PL011_REGISTER_SIZE               0x1000


static struct cdev chr_dev;
static dev_t ndev;
static int chr_open(struct inode *nd, struct file *flip)
{
        int major = MAJOR(nd->i_rdev);
        int minor = MINOR(nd->i_rdev);
        printk("open major: %d, minor: %d\n", major, minor);
        return 0;
}

static ssize_t chr_read(struct file *f, char __user *u, size_t sz, loff_t *off)
{
        printk("In the chr_read() function!5\n");
        void __iomem *addr = ioremap(PL011_REGISTER_ADDR , PL011_REGISTER_SIZE);
        printk("address: %d", addr);
        int reg = ioread32(addr);
        iowrite32(32, reg);
        printk("reg %d", reg);
        return 0;
}

struct file_operations chr_ops=
{
        .owner = THIS_MODULE,
        .open = chr_open,
        .read = chr_read,
};

static int __init module_test_init(void)
{
        int ret;
        cdev_init(&chr_dev, &chr_ops);
        ret = alloc_chrdev_region(&ndev, 0, 1, "chr_dev");
        ret = cdev_add(&chr_dev, ndev, 1);
        if (ret < 0)
        {
                printk("error: %d", ret);
                return ret;
        }
        int major = MAJOR(ndev);
        int minor = MINOR(ndev);
        printk("major: %d, minor: %d\n", major, minor);
        return 0;
}    
  
static void __exit module_test_exit(void)
{
        printk("module_test_exit\n");
        cdev_del(&chr_dev);
        unregister_chrdev_region(ndev, 1);
}
  
  
module_init(module_test_init);
module_exit(module_test_exit);
MODULE_LICENSE("GPL");