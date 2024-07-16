To run this example, run following command in the terminal:

Compile the module:
~~~~~
make

~~~~~

Insert the module into the kernel:
~~~~~
insmod mymodule.ko

~~~~~

Check the kernel log:
~~~~~
dmesg | tail

~~~~~

Remove the module from the kernel:
~~~~~
rmmode mymodule

~~~~~
