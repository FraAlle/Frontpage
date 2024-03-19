## LINUX inputs
You can check the inputs used in linux by checking the file /proc/interrupts
It reset at each machine reset
Other usefull doc is /proc/ioport

## Devices and drivers
Cold plug: devices that to be unplugged is needed that the PC is shutdown(Graphic cards, memory, etc)
Hot plug: these diveces can be unplugged when the PC is still running(keyboards, USB, etc)
lspci show the devices utilizing in that moment
lsmod to list the drivers
rmmod delete a driver
insmod add a driver but is needed the full path, i searched for the module deleted "video" find /lib/modules/$(uname -r)/
or i can use modprobe to delete and add modules
software that have no root privileges use the devices thanks to the sysfs mounted on sys folder
