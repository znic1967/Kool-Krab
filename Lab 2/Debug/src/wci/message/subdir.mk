################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/wci/message/Message.cpp \
../src/wci/message/MessageHandler.cpp 

OBJS += \
./src/wci/message/Message.o \
./src/wci/message/MessageHandler.o 

CPP_DEPS += \
./src/wci/message/Message.d \
./src/wci/message/MessageHandler.d 


# Each subdirectory must supply rules for building sources it contributes
src/wci/message/%.o: ../src/wci/message/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -D__GXX_EXPERIMENTAL_CXX0X__ -I"D:\Code\CMPE 152 Source Files\boost_headers" -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


