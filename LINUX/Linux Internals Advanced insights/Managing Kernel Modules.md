Kernel modules are loaded in different ways
	through the initramfs / initrd
	through the **systemd-udevd**
	you can manually load kernal modues using **modprobe**

![[Pasted image 20241128111147.png]]

![[Pasted image 20241128112809.png]]
lspci -k lists the kernel modules and used by a device

![[Pasted image 20241128112909.png]]
modinfo <kernelmodulename> gets the params we can pass

