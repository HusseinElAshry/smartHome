################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../app/component/doorpage/doorpage.c 

OBJS += \
./app/component/doorpage/doorpage.o 

C_DEPS += \
./app/component/doorpage/doorpage.d 


# Each subdirectory must supply rules for building sources it contributes
app/component/doorpage/%.o: ../app/component/doorpage/%.c app/component/doorpage/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


