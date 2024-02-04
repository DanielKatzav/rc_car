################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../3rd_party/nrf24l01/nrf24.c 

C_DEPS += \
./3rd_party/nrf24l01/nrf24.d 

OBJS += \
./3rd_party/nrf24l01/nrf24.o 


# Each subdirectory must supply rules for building sources it contributes
3rd_party/nrf24l01/%.o 3rd_party/nrf24l01/%.su 3rd_party/nrf24l01/%.cyclo: ../3rd_party/nrf24l01/%.c 3rd_party/nrf24l01/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../3rd_party -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-3rd_party-2f-nrf24l01

clean-3rd_party-2f-nrf24l01:
	-$(RM) ./3rd_party/nrf24l01/nrf24.cyclo ./3rd_party/nrf24l01/nrf24.d ./3rd_party/nrf24l01/nrf24.o ./3rd_party/nrf24l01/nrf24.su

.PHONY: clean-3rd_party-2f-nrf24l01

