################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/wci/frontend/pascal/parsers/AssignmentStatementParser.cpp \
../src/wci/frontend/pascal/parsers/CaseStatementParser.cpp \
../src/wci/frontend/pascal/parsers/CompoundStatementParser.cpp \
../src/wci/frontend/pascal/parsers/ExpressionParser.cpp \
../src/wci/frontend/pascal/parsers/ForStatementParser.cpp \
../src/wci/frontend/pascal/parsers/IfStatementParser.cpp \
../src/wci/frontend/pascal/parsers/RepeatStatementParser.cpp \
../src/wci/frontend/pascal/parsers/StatementParser.cpp \
../src/wci/frontend/pascal/parsers/WhenStatementParser.cpp \
../src/wci/frontend/pascal/parsers/WhileStatementParser.cpp 

OBJS += \
./src/wci/frontend/pascal/parsers/AssignmentStatementParser.o \
./src/wci/frontend/pascal/parsers/CaseStatementParser.o \
./src/wci/frontend/pascal/parsers/CompoundStatementParser.o \
./src/wci/frontend/pascal/parsers/ExpressionParser.o \
./src/wci/frontend/pascal/parsers/ForStatementParser.o \
./src/wci/frontend/pascal/parsers/IfStatementParser.o \
./src/wci/frontend/pascal/parsers/RepeatStatementParser.o \
./src/wci/frontend/pascal/parsers/StatementParser.o \
./src/wci/frontend/pascal/parsers/WhenStatementParser.o \
./src/wci/frontend/pascal/parsers/WhileStatementParser.o 

CPP_DEPS += \
./src/wci/frontend/pascal/parsers/AssignmentStatementParser.d \
./src/wci/frontend/pascal/parsers/CaseStatementParser.d \
./src/wci/frontend/pascal/parsers/CompoundStatementParser.d \
./src/wci/frontend/pascal/parsers/ExpressionParser.d \
./src/wci/frontend/pascal/parsers/ForStatementParser.d \
./src/wci/frontend/pascal/parsers/IfStatementParser.d \
./src/wci/frontend/pascal/parsers/RepeatStatementParser.d \
./src/wci/frontend/pascal/parsers/StatementParser.d \
./src/wci/frontend/pascal/parsers/WhenStatementParser.d \
./src/wci/frontend/pascal/parsers/WhileStatementParser.d 


# Each subdirectory must supply rules for building sources it contributes
src/wci/frontend/pascal/parsers/%.o: ../src/wci/frontend/pascal/parsers/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -I"D:\Code\boost_headers" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


