#!/bin/bash

path_of_openocd_target=~/openocd/tcl/target
path_of_openocd_interface=~/openocd/tcl/interface

#analyzis path to your project
cd ..
path_to_project=$(pwd)
path_of_install_workspace=$path_to_project/Install_Workspace
path_of_target=$path_to_project/Install_Workspace/Target
path_of_interface=$path_to_project/Install_Workspace/Interface

cd $path_of_install_workspace
echo $path_to_project>prj_path.log #for analyzis for main script file

#create config-file for GDB
cd $path_to_project
echo -e "target remote 127.0.0.1:3333\nmonitor set remote hardware-watchpoint-limit 4\nmonitor set remote hardware-breakpoint-limit 6\nmonitor set remotetimeout 3\nmonitor reset halt\nload\nmonitor reset halt">.gdbinit
path_of_gdbinit=$path_to_project/.gdbinit
cd $HOME
echo -e "add-auto-load-safe-path" $path_of_gdbinit>.gdbinit

#copy your config for microcontroller to ~/openocd/tcl/target
echo "Creating configuration for OpenOCD..."
echo -e "Enter name of config file for your microcontroller:"
read name_of_mk_cfg
cp $path_of_target/$name_of_mk_cfg $path_of_openocd_target

#copy your config for interface to ~/openocd/tcl/interface
echo -e "Enter name of config file for your interface:"
read name_of_interface_cfg
cp $path_of_interface/$name_of_interface_cfg $path_of_openocd_interface

#create config-file for OpenOCD
cd ~/openocd
echo -e "telnet_port 4444\ngdb_port 3333\nsource [find interface"'/'$name_of_interface_cfg"]\n""source [find target"'/'$name_of_mk_cfg"]\n""reset_config trst_only\nadapter_khz 500\ninit\nreset init">openocd.cfg
