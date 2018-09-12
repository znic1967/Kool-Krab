################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/wci/frontend/cpp/tokens/CPPCharacterToken.cpp \
../src/wci/frontend/cpp/tokens/CPPErrorToken.cpp \
../src/wci/frontend/cpp/tokens/CPPNumberToken.cpp \
../src/wci/frontend/cpp/tokens/CPPSpecialSymbolToken.cpp \
../src/wci/frontend/cpp/tokens/CPPStringToken.cpp \
../src/wci/frontend/cpp/tokens/CPPWordToken.cpp 

OBJS += \
./src/wci/frontend/cpp/tokens/CPPCharacterToken.o \
./src/wci/frontend/cpp/tokens/CPPErrorToken.o \
./src/wci/frontend/cpp/tokens/CPPNumberToken.o \
./src/wci/frontend/cpp/tokens/CPPSpecialSymbolToken.o \
./src/wci/frontend/cpp/tokens/CPPStringToken.o \
./src/wci/frontend/cpp/tokens/CPPWordToken.o 

CPP_DEPS += \
./src/wci/frontend/cpp/tokens/CPPCharacterToken.d \
./src/wci/frontend/cpp/tokens/CPPErrorToken.d \
./src/wci/frontend/cpp/tokens/CPPNumberToken.d \
./src/wci/frontend/cpp/tokens/CPPSpecialSymbolToken.d \
./src/wci/frontend/cpp/tokens/CPPStringToken.d \
./src/wci/frontend/cpp/tokens/CPPWordToken.d 


# Each subdirectory must supply rules for building sources it contributes
src/wci/frontend/cpp/tokens/%.o: ../src/wci/frontend/cpp/tokens/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -I"D:\Code\boost_headers" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


