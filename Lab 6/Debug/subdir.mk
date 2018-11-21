################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Main.cpp \
../MainBaseVisitor.cpp \
../MainLexer.cpp \
../MainParser.cpp \
../MainVisitor.cpp \
../Pass1Visitor.cpp \
../Pass2Visitor.cpp 

OBJS += \
./Main.o \
./MainBaseVisitor.o \
./MainLexer.o \
./MainParser.o \
./MainVisitor.o \
./Pass1Visitor.o \
./Pass2Visitor.o 

CPP_DEPS += \
./Main.d \
./MainBaseVisitor.d \
./MainLexer.d \
./MainParser.d \
./MainVisitor.d \
./Pass1Visitor.d \
./Pass2Visitor.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -std=c++0x -I"D:\Code\152source\antlr4-4.7.1\runtime\Cpp\runtime\src" -I"D:\Code\152source\boost_headers" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


