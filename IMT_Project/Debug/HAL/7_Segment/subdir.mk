################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/7_Segment/7_Segment_Programe.c 

OBJS += \
./HAL/7_Segment/7_Segment_Programe.o 

C_DEPS += \
./HAL/7_Segment/7_Segment_Programe.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/7_Segment/%.o: ../HAL/7_Segment/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


