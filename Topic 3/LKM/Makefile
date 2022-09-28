export CROSS_COMPILE=aarch64-linux-gnu-
export ARCH=arm64

CFLAGS_MODULE=-fno-pic
  
KERNEL_DIR ?= /home/edison/study/kernel/linux

ifeq ($(KERNELRELEASE),)
modules:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) modules
install:
	rm -f $(KERNEL_DIR)/kmodules/*.ko
	cp *.ko $(KERNEL_DIR)/kmodules
main:
	aarch64-linux-gnu-gcc main.c -o main.o
	rm -f $(KERNEL_DIR)/kmodules/main.o
	cp main.o $(KERNEL_DIR)/kmodules
clean:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) clean
else
obj-m := module_test.o
endif