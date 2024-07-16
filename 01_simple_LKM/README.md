To run this example, run following command in the terminal:

Compile the module:
~~~~~
make

~~~~~

Insert the module into the kernel:
~~~~~
sudo insmod mymodule.ko

~~~~~

Check the kernel log:
~~~~~
dmesg | tail

~~~~~

Remove the module from the kernel:
~~~~~
sudo rmmode mymodule

~~~~~
