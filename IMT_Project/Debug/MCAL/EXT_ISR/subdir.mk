################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/EXT_ISR/EXT_ISR_Programe.c 

OBJS += \
./MCAL/EXT_ISR/EXT_ISR_Programe.o 

C_DEPS += \
./MCAL/EXT_ISR/EXT_ISR_Programe.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/EXT_ISR/%.o: ../MCAL/EXT_ISR/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


