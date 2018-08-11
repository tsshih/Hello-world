obj-m := hello.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
default:
	make -C $(KERNELBUILD) M=$(shell pwd) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
