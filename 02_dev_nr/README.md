To run this example, run following command in the terminal:

Compile the module:
~~~~~
make

~~~~~

Insert the module into the kernel:
~~~~~
sudo insmod dev_nr.ko

~~~~~

Check the kernel log, which asigns the device number:
~~~~~
cat /proc/devices | grep my_dev_nr

~~~~~

Create a device file into bash:
~~~~~
sudo mknod /dev/mydevice c 64 0

~~~~~

Compile the test program:
~~~~~
gcc test.c -o test

~~~~~

Run the test program:
~~~~~
./test

~~~~~
