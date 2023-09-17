obj-m += helloworldLKM.o
all:
	sudo make -C /lib/modules/`uname -r`/build M=$(PWD) modules
clean:
	sudo make -C /lib/modules/`uname -r`/build M=$(PWD) clean