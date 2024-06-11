#! /bin/bash

sudo rm /mnt/btrfs_mount/text_file.txt
cd btrfs
make -j24
sudo umount -v /mnt/btrfs_mount
sudo rmmod btrfs
sudo insmod btrfs.ko
#sudo mkfs.btrfs -vf /dev/sdb
sudo mount -t btrfs /dev/sdb /mnt/btrfs_mount
#sudo mount -v /dev/sdb /mnt/btrfs_mount
cd ..
sudo ./open_file