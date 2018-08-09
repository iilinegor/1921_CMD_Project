#!/bin/bash
url_for_gcc=https://developer.arm.com/-/media/Files/downloads/gnu-rm/7-2018q2/gcc-arm-none-eabi-7-2018-q2-update-linux.tar.bz2?revision=bc2c96c0-14b5-4bb4-9f18-bceb4050fee7?product=GNU%20Arm%20Embedded%20Toolchain,64-bit,,Linux,7-2018-q2-update
name_of_gcc_archive=~/Загрузки/gcc-arm-none-eabi.tar.bz2
path_of_gcc=/opt

#install gcc-arm-none-eabi for linux x64
wget -O $name_of_gcc_archive $url_for_gcc
tar -xvf $name_of_gcc_archive -C $path_of_gcc