################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/wci/intermediate/ICodeFactory.cpp \
../src/wci/intermediate/SymTabFactory.cpp 

OBJS += \
./src/wci/intermediate/ICodeFactory.o \
./src/wci/intermediate/SymTabFactory.o 

CPP_DEPS += \
./src/wci/intermediate/ICodeFactory.d \
./src/wci/intermediate/SymTabFactory.d 


# Each subdirectory must supply rules for building sources it contributes
src/wci/intermediate/%.o: ../src/wci/intermediate/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -I"D:\Code\boost_headers" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


