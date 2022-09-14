obj-m := demo_chr_dev.o
# 内核源码的位置
KERNELDIR := 
PWD := $(shell pwd)

default:
	$(MAKE) -C$(KERNELDIR)M=$(PWD) modules
clean:
	rm -f *.o *.ko *.mod.c