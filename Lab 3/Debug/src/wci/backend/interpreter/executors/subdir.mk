################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/wci/backend/interpreter/executors/AssignmentExecutor.cpp \
../src/wci/backend/interpreter/executors/CompoundExecutor.cpp \
../src/wci/backend/interpreter/executors/ExpressionExecutor.cpp \
../src/wci/backend/interpreter/executors/IfExecutor.cpp \
../src/wci/backend/interpreter/executors/LoopExecutor.cpp \
../src/wci/backend/interpreter/executors/SelectExecutor.cpp \
../src/wci/backend/interpreter/executors/StatementExecutor.cpp \
../src/wci/backend/interpreter/executors/WhenExecutor.cpp 

OBJS += \
./src/wci/backend/interpreter/executors/AssignmentExecutor.o \
./src/wci/backend/interpreter/executors/CompoundExecutor.o \
./src/wci/backend/interpreter/executors/ExpressionExecutor.o \
./src/wci/backend/interpreter/executors/IfExecutor.o \
./src/wci/backend/interpreter/executors/LoopExecutor.o \
./src/wci/backend/interpreter/executors/SelectExecutor.o \
./src/wci/backend/interpreter/executors/StatementExecutor.o \
./src/wci/backend/interpreter/executors/WhenExecutor.o 

CPP_DEPS += \
./src/wci/backend/interpreter/executors/AssignmentExecutor.d \
./src/wci/backend/interpreter/executors/CompoundExecutor.d \
./src/wci/backend/interpreter/executors/ExpressionExecutor.d \
./src/wci/backend/interpreter/executors/IfExecutor.d \
./src/wci/backend/interpreter/executors/LoopExecutor.d \
./src/wci/backend/interpreter/executors/SelectExecutor.d \
./src/wci/backend/interpreter/executors/StatementExecutor.d \
./src/wci/backend/interpreter/executors/WhenExecutor.d 


# Each subdirectory must supply rules for building sources it contributes
src/wci/backend/interpreter/executors/%.o: ../src/wci/backend/interpreter/executors/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -I"D:\Code\CMPE 152 Source Files\boost_headers" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


