################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/Global_ISR/subdir.mk
-include MCAL/EXT_ISR/subdir.mk
-include MCAL/DIO/subdir.mk
-include MCAL/ADC/subdir.mk
-include HAL/LM35/subdir.mk
-include HAL/LED/subdir.mk
-include HAL/LCD/subdir.mk
-include HAL/KeyBad/subdir.mk
-include HAL/Button/subdir.mk
-include HAL/7_Segment/subdir.mk
-include APP/LM35_APP/subdir.mk
-include APP/LED_APP/subdir.mk
-include APP/LCD_APP/subdir.mk
-include APP/KEYBAD_APP/subdir.mk
-include APP/EXT_APP/subdir.mk
-include APP/ADC_APP/subdir.mk
-include APP/7_SEGMENT_APP/subdir.mk
-include APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
IMT_Project.lss \

FLASH_IMAGE += \
IMT_Project.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: IMT_Project.elf secondary-outputs

# Tool invocations
IMT_Project.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,IMT_Project.map -mmcu=atmega32 -o "IMT_Project.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

IMT_Project.lss: IMT_Project.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S IMT_Project.elf  >"IMT_Project.lss"
	@echo 'Finished building: $@'
	@echo ' '

IMT_Project.hex: IMT_Project.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex IMT_Project.elf  "IMT_Project.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: IMT_Project.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 IMT_Project.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) IMT_Project.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
