target remote 127.0.0.1:3333
monitor set remote hardware-watchpoint-limit 4
monitor set remote hardware-breakpoint-limit 6
monitor set remotetimeout 3
monitor reset halt
load
monitor reset halt
