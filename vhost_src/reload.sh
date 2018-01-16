#!/bin/sh

rm -rf ./*.ko
make -C /lib/modules/3.10.0-327.el7.x86_64/build/ M=$(pwd) modules
rmmod vhost_net
rmmod vhost
modprobe macvtap
insmod ./vhost.ko
insmod ./vhost_net.ko
