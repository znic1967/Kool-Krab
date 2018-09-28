################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/wci/intermediate/icodeimpl/ICodeImpl.cpp \
../src/wci/intermediate/icodeimpl/ICodeNodeImpl.cpp 

OBJS += \
./src/wci/intermediate/icodeimpl/ICodeImpl.o \
./src/wci/intermediate/icodeimpl/ICodeNodeImpl.o 

CPP_DEPS += \
./src/wci/intermediate/icodeimpl/ICodeImpl.d \
./src/wci/intermediate/icodeimpl/ICodeNodeImpl.d 


# Each subdirectory must supply rules for building sources it contributes
src/wci/intermediate/icodeimpl/%.o: ../src/wci/intermediate/icodeimpl/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -I"D:\Code\CMPE 152 Source Files\boost_headers" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


