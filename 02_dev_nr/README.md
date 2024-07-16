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

Check the device file:
~~~~~
ls /dev/mydevice -al

~~~~~

Compile the test program:
~~~~~
gcc test.c -o test

~~~~~

Change the permissions of the device file:
~~~~~
sudo chmod 666 /dev/mydevice

~~~~~

Run the test program:
~~~~~
./test

~~~~~

Check the kernel log for the output of the test program:
~~~~~
dmesg

~~~~~

Remove the module from the kernel:
~~~~~
sudo rmmod dev_nr

~~~~~