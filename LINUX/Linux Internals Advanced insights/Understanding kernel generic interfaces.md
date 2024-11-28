1. to access specific hardware devices, the kernal uses kernal modules as drivers
2. to  access these modules, some main generic interfaces are used are
	1. Virtual Memory for addressing memory
	2. VFS for addressing file system
	3. device Mapper for addressing several types of block devices
	4. TCP/IP for addressing network devices
3. System calls provide access to these generic interfaces.

![[Pasted image 20241128110147.png]]