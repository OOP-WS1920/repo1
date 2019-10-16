################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Participant.cpp \
../Time.cpp \
../ooptool.cpp \
../race_main.cpp 

OBJS += \
./Participant.o \
./Time.o \
./ooptool.o \
./race_main.o 

CPP_DEPS += \
./Participant.d \
./Time.d \
./ooptool.d \
./race_main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


