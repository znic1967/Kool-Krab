################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../main.cpp \
../mainBaseListener.cpp \
../mainLexer.cpp \
../mainListener.cpp \
../mainParser.cpp 

OBJS += \
./main.o \
./mainBaseListener.o \
./mainLexer.o \
./mainListener.o \
./mainParser.o 

CPP_DEPS += \
./main.d \
./mainBaseListener.d \
./mainLexer.d \
./mainListener.d \
./mainParser.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -I"D:\Code\152source\antlr4-4.7.1\runtime\Cpp\runtime\src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


