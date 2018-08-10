#!/bin/bash
set -e
echo -e "Choose number of operation:\n1)Incremental rebuild and run\n2)Rebuild all and run\n3)Incremental build without run\n4)Rebuild all without run\n5)Run"
echo "Enter your choice:"
read type_of_operation
logout=./Build_Results/Output/out.log #for output log file
hexpath=./Build_Results/Output #path of output file (hex,elf)

case "$type_of_operation" in
"1")
echo -e "\nIncremental rebuild is finished" 
make>$logout #all messages redirect to log file
echo -e "Run..."
############################################################################################################################
############################################ RUN OpenOCD and GDB using tmux ################################################
############################################################################################################################
name_out_file=$(grep 'hexname' $logout) #searching name of output file (hex or elf)
name_out_file2=$(echo ${name_out_file/hexname/}) #selecting a name of output file
tmux new-session -s myses -d #create a session
tmux split-window -h -t myses:0 #split-window (vertical)
tmux send-keys -t myses:0.0 cd space ~/openocd enter sudo space openocd enter #run openocd
tmux send-keys -t myses:0.1 arm-none-eabi-gdb space -x space .gdbinit space $hexpath/$name_out_file2.elf enter #run gdb
tmux send-keys -t myses:0.1 enter #for start gdb-debug
tmux -2 attach-session -t myses #don't close a session
############################################################################################################################
############################################################################################################################
############################################################################################################################
;;
"2")
echo -e "\nRebuild all is finished"
make clean>$logout #all messages redirect to log file
make>>$logout #all messages redirect to log file
echo -e "Run..."
############################################################################################################################
############################################ RUN OpenOCD and GDB using tmux ################################################
############################################################################################################################
name_out_file=$(grep 'hexname' $logout) #searching name of output file (hex or elf)
name_out_file2=$(echo ${name_out_file/hexname/}) #selecting a name of output file
tmux new-session -s myses -d #create a session
tmux split-window -h -t myses:0 #split-window (vertical)
tmux send-keys -t myses:0.0 cd space ~/openocd enter sudo space openocd enter #run openocd
tmux send-keys -t myses:0.1 arm-none-eabi-gdb space -x space .gdbinit space $hexpath/$name_out_file2.elf enter #run gdb
tmux send-keys -t myses:0.1 enter #for start gdb-debug
tmux -2 attach-session -t myses #don't close a session
############################################################################################################################
############################################################################################################################
############################################################################################################################
;;
"3")
echo -e "\nIncremental rebuild is finished:"
make>$logout #all messages redirect to log file
;;
"4")
echo -e "\nRebuild all is finished"
make clean>$logout #all messages redirect to log file
make>>$logout #all messages redirect to log file
;;
"5")
echo -e "\nRun..."
############################################################################################################################
############################################ RUN OpenOCD and GDB using tmux ################################################
############################################################################################################################
name_out_file=$(grep 'hexname' $logout) #searching name of output file (hex or elf)
name_out_file2=$(echo ${name_out_file/hexname/}) #selecting a name of output file
tmux new-session -s myses -d #create a session 
tmux split-window -h -t myses:0 #split-window (vertical) 
tmux send-keys -t myses:0.0 cd space ~/openocd enter sudo space openocd enter #run openocd 
tmux send-keys -t myses:0.1 arm-none-eabi-gdb space -x space .gdbinit space $hexpath/$name_out_file2.elf enter #run gdb
tmux send-keys -t myses:0.1 enter #for start gdb-debug 
tmux -2 attach-session -t myses #don't close a session 
############################################################################################################################
############################################################################################################################
############################################################################################################################
esac
if (("$type_of_operation" != "1" && "$type_of_operation" != "2" && "$type_of_operation" != "3" && "$type_of_operation" != "4" && "$type_of_operation" != "5")); then
echo "Incorrectly choice!"
fi
