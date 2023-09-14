################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../app/component/tvandac/tvpage.c 

OBJS += \
./app/component/tvandac/tvpage.o 

C_DEPS += \
./app/component/tvandac/tvpage.d 


# Each subdirectory must supply rules for building sources it contributes
app/component/tvandac/%.o: ../app/component/tvandac/%.c app/component/tvandac/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


