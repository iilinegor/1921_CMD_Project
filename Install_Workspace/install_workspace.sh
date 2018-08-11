#!/bin/bash

#URL for download arm-none-eabi-gcc
url_for_gcc=https://developer.arm.com/-/media/Files/downloads/gnu-rm/7-2018q2/gcc-arm-none-eabi-7-2018-q2-update-linux.tar.bz2?revision=bc2c96c0-14b5-4bb4-9f18-bceb4050fee7?product=GNU%20Arm%20Embedded%20Toolchain,64-bit,,Linux,7-2018-q2-update
#name of gcc archive
name_of_gcc_archive=$HOME/gcc-arm-none-eabi.tar.bz2
#path for gcc directory
path_of_gcc_directory=/opt
#path of profile config ($PATH)
path_of_profile_cfg=~/.profile
#path for "jlink.rules" file
path_of_jlink_rules=/etc/udev/rules.d/45-jlink.rules
#path of binary file of openocd
path_of_binary_openocd=/usr/local/bin/openocd

##############################################################################################################################################
######################################################## INSTALL gcc-arm-none-eabi ###########################################################
##############################################################################################################################################
#install gcc-arm-none-eabi for linux x64 in /opt
echo -e "\nInstall GCC-ARM-NONE-EABI\n"
wget -O $name_of_gcc_archive $url_for_gcc
tar -xvf $name_of_gcc_archive -C $path_of_gcc_directory
#adding a path of gcc binary files to the environment variable $PATH
path_of_gcc_bin_directory=$(find $path_of_gcc_directory -name arm-none-eabi-gcc)
path_of_gcc_bin_directory2=$(echo ${path_of_gcc_bin_directory/arm-none-eabi-gcc/})
echo "PATH=$PATH:$path_of_gcc_bin_directory2" >> $path_of_profile_cfg
##############################################################################################################################################
##############################################################################################################################################
##############################################################################################################################################

##############################################################################################################################################
######################################################## INSTALL OpenOCD with JTAG ###########################################################
##############################################################################################################################################
echo -e "\nInstall OpenOCD\n"
sudo apt-get install libtool autoconf texinfo libusb-dev libusb-1.0-0-dev #install dependencies
cd $HOME
git clone git://git.code.sf.net/p/openocd/code openocd  #clone repository
#according to readme of openocd
cd openocd
./bootstrap
./configure --enable-jlink
make
sudo make install
#settings for jlink
echo -e 'BUS!="usb", ACTION!="add", SUBSYSTEM!=="usb_device", GOTO="kcontrol_rules_end"\nSYSFS{idProduct}=="0101", SYSFS{idVendor}=="1366", MODE="664", GROUP="plugdev"\nLABEL="kcontrol_rules_end"'>$path_of_jlink_rules
sudo adduser $USER plugdev #add our user to plugdev
echo "%$USER ALL=(ALL) NOPASSWD: /usr/local/bin/gcc" | sudo EDITOR='tee -a' visudo #add nopassword for openocd
##############################################################################################################################################
##############################################################################################################################################
##############################################################################################################################################

##############################################################################################################################################
######################################################## Install TMUX ########################################################################
##############################################################################################################################################
echo -e "\nInstall TMUX\n"
sudo apt-get install tmux
cd $HOME
echo "set-option -g mouse on">>.tmux.conf
echo "bind -n WheelUpPane if-shell -F -t = \"#{mouse_any_flag}\" \"send-keys -M\" \"if -Ft= '#{pane_in_mode}' 'send-keys -M' 'select-pane -t=; copy-mode -e; send-keys -M'\"">>.tmux.conf
echo "bind -n WheelDownPane select-pane -t= \; send-keys -M">>.tmux.conf
##############################################################################################################################################
##############################################################################################################################################
##############################################################################################################################################
echo -e "\nFINISHED!\n"