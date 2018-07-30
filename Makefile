program_name := niiet_program
input_directories := apps/inc:apps/src:apps/libs/cmsis:apps/libs/device:apps/ld_scr
ouput_directories := build/map:build/obj:build/out
search_wildcards := $(addsuffix /*.c,$(input_directories))
