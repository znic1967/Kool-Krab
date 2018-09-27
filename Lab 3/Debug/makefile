################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/wci/util/subdir.mk
-include src/wci/message/subdir.mk
-include src/wci/intermediate/symtabimpl/subdir.mk
-include src/wci/intermediate/icodeimpl/subdir.mk
-include src/wci/intermediate/subdir.mk
-include src/wci/frontend/pascal/tokens/subdir.mk
-include src/wci/frontend/pascal/parsers/subdir.mk
-include src/wci/frontend/pascal/subdir.mk
-include src/wci/frontend/subdir.mk
-include src/wci/backend/interpreter/executors/subdir.mk
-include src/wci/backend/interpreter/subdir.mk
-include src/wci/backend/compiler/subdir.mk
-include src/wci/backend/subdir.mk
-include src/wci/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Lab\ 3.exe

# Tool invocations
Lab\ 3.exe: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cygwin C++ Linker'
	g++  -o "Lab 3.exe" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(EXECUTABLES)$(OBJS)$(C_UPPER_DEPS)$(CXX_DEPS)$(CPP_DEPS)$(C_DEPS) "Lab 3.exe"
	-@echo ' '

.PHONY: all clean dependents

-include ../makefile.targets
