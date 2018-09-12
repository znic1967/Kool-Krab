################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/wci/frontend/cpp/CPPError.cpp \
../src/wci/frontend/cpp/CPPErrorHandler.cpp \
../src/wci/frontend/cpp/CPPParserTD.cpp \
../src/wci/frontend/cpp/CPPScanner.cpp \
../src/wci/frontend/cpp/CPPToken.cpp 

OBJS += \
./src/wci/frontend/cpp/CPPError.o \
./src/wci/frontend/cpp/CPPErrorHandler.o \
./src/wci/frontend/cpp/CPPParserTD.o \
./src/wci/frontend/cpp/CPPScanner.o \
./src/wci/frontend/cpp/CPPToken.o 

CPP_DEPS += \
./src/wci/frontend/cpp/CPPError.d \
./src/wci/frontend/cpp/CPPErrorHandler.d \
./src/wci/frontend/cpp/CPPParserTD.d \
./src/wci/frontend/cpp/CPPScanner.d \
./src/wci/frontend/cpp/CPPToken.d 


# Each subdirectory must supply rules for building sources it contributes
src/wci/frontend/cpp/%.o: ../src/wci/frontend/cpp/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -D__GXX_EXPERIMENTAL_CXX0X__ -I"D:\Code\CMPE 152 Source Files\boost_headers" -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


