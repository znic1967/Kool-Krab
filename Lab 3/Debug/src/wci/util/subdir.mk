################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/wci/util/CrossReferencer.cpp \
../src/wci/util/ParseTreePrinter.cpp 

OBJS += \
./src/wci/util/CrossReferencer.o \
./src/wci/util/ParseTreePrinter.o 

CPP_DEPS += \
./src/wci/util/CrossReferencer.d \
./src/wci/util/ParseTreePrinter.d 


# Each subdirectory must supply rules for building sources it contributes
src/wci/util/%.o: ../src/wci/util/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -I"D:\Code\CMPE 152 Source Files\boost_headers" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


