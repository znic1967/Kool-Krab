################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/wci/Globals.cpp 

OBJS += \
./src/wci/Globals.o 

CPP_DEPS += \
./src/wci/Globals.d 


# Each subdirectory must supply rules for building sources it contributes
src/wci/%.o: ../src/wci/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -I"D:\Code\CMPE 152 Source Files\boost_headers" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


