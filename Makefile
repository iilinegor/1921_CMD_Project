#type of microcontroller:
type_of_microcontroller := K1921VK01T
#name of ouput .hex file:
program_name := $(type_of_microcontroller)_program
#paths of directories for different input-file types:
headers_path := Application/Source Application/Include Application/Libs/CMSIS Application/Libs/Device Application/LD_Scripts
source_path := Application/Source
asm_path := Application/Libs/Device
linker_path := Application/LD_Scripts

#do not touch!
search_source := $(addsuffix /*.c,$(source_path))
search_asm := $(addsuffix /$(type_of_microcontroller).S,$(asm_path))
search_ld := $(addsuffix /$(type_of_microcontroller).ld,$(linker_path))

#define for gcc:
arm_gcc := arm-none-eabi-gcc
#define for objcopy:
obj_copy := arm-none-eabi-objcopy

#paths of directories for different output-file types:
target_path := Build_Results/Output/
obj_path := Build_Results/Objects/
map_path := Build_Results/Map/K1921VK01T_program.map

#define of gcc-arm-none-eabi-gcc config's for compiling and linkage:
c_compile_config := -g -O0 -Wall -Wextra -mthumb "-mcpu=cortex-m4" "-mfloat-abi=hard" "-mfpu=fpv4-sp-d16" -pipe "-fvisibility=default" -fdata-sections -ffunction-sections "-std=gnu99" -D__STARTUP_CLEAR_BSS -D__NO_SYSTEM_INIT "-D__START=main"
S_compile_config := -g -O0 -Wall -Wextra -mthumb "-mcpu=cortex-m4" "-mfloat-abi=hard" "-mfpu=fpv4-sp-d16" -pipe "-fvisibility=default" -fdata-sections -ffunction-sections -D__STARTUP_CLEAR_BSS -D__NO_SYSTEM_INIT "-D__START=main"
linker_config := "-Wl,-T$(search_ld),--gc-sections,-Map=$(map_path)" -mthumb "-mcpu=cortex-m4" "-mfloat-abi=hard" "-mfpu=fpv4-sp-d16"
obj_copy_config := -O ihex

#basic target (elf-to-hex convert)
$(program_name).hex: $(program_name).elf
	$(obj_copy) $(obj_copy_config) $(target_path)$(program_name).elf $(target_path)$@

#second target (linkage)
$(program_name).elf: $(notdir $(patsubst %.c,%.o,$(wildcard $(search_source)))) $(notdir $(patsubst %.S,%.o,$(wildcard $(search_asm))))
	$(arm_gcc) $(linker_config) $(obj_path)*.o -o $(target_path)$@
VPATH := $(headers_path)
#third target (compiling)
%.o: %.c
	$(arm_gcc) $(c_compile_config) -c -MD $(addprefix -I,$(headers_path)) $< -o $(obj_path)$@
%.o: %.S
	$(arm_gcc) $(S_compile_config) -c -MD $(addprefix -I,$(headers_path)) $< -o $(obj_path)$@
include $(wildcard *.d)

#for delete all ouput files(.hex,.elf,.o,.d,.map)
.PHONY : clean
clean: 
	-rm $(target_path)$(program_name).* $(obj_path)*.o $(obj_path)*.d $(map_path)