################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../AppMode.c \
../AppMode_Error.c \
../AppMode_Idle.c \
../AppMode_Init.c \
../AppMode_Operation.c \
../AppScheduling.c \
../Cpu0_Main.c \
../Driver_Adc.c \
../Driver_Asc.c \
../Driver_Can.c \
../Driver_Gtm.c \
../Driver_Port.c \
../Driver_Stm.c \
../Driver_Watchdog.c 

COMPILED_SRCS += \
./AppMode.src \
./AppMode_Error.src \
./AppMode_Idle.src \
./AppMode_Init.src \
./AppMode_Operation.src \
./AppScheduling.src \
./Cpu0_Main.src \
./Driver_Adc.src \
./Driver_Asc.src \
./Driver_Can.src \
./Driver_Gtm.src \
./Driver_Port.src \
./Driver_Stm.src \
./Driver_Watchdog.src 

C_DEPS += \
./AppMode.d \
./AppMode_Error.d \
./AppMode_Idle.d \
./AppMode_Init.d \
./AppMode_Operation.d \
./AppScheduling.d \
./Cpu0_Main.d \
./Driver_Adc.d \
./Driver_Asc.d \
./Driver_Can.d \
./Driver_Gtm.d \
./Driver_Port.d \
./Driver_Stm.d \
./Driver_Watchdog.d 

OBJS += \
./AppMode.o \
./AppMode_Error.o \
./AppMode_Idle.o \
./AppMode_Init.o \
./AppMode_Operation.o \
./AppScheduling.o \
./Cpu0_Main.o \
./Driver_Adc.o \
./Driver_Asc.o \
./Driver_Can.o \
./Driver_Gtm.o \
./Driver_Port.o \
./Driver_Stm.o \
./Driver_Watchdog.o 


# Each subdirectory must supply rules for building sources it contributes
%.src: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: TASKING C/C++ Compiler'
	cctc -cs --dep-file="$(basename $@).d" --misrac-version=2004 -D__CPU__=tc27xd "-fC:/Users/user/AURIX-v1.9.20-workspace/TC275_Project1/Debug/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<" && \
	if [ -f "$(basename $@).d" ]; then sed.exe -r  -e 's/\\/\//g' -e 's/\/\//\//g' -e 's/"//g' -e 's/([a-zA-Z]:\/)/\L\1/g' -e 's/\d32:/@TARGET_DELIMITER@/g; s/\\\d32/@ESCAPED_SPACE@/g; s/\d32/\\\d32/g; s/@ESCAPED_SPACE@/\\\d32/g; s/@TARGET_DELIMITER@/\d32:/g' "$(basename $@).d" > "$(basename $@).d_sed" && cp "$(basename $@).d_sed" "$(basename $@).d" && rm -f "$(basename $@).d_sed" 2>/dev/null; else echo 'No dependency file to process';fi
	@echo 'Finished building: $<'
	@echo ' '

%.o: ./%.src subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: TASKING Assembler'
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./AppMode.d ./AppMode.o ./AppMode.src ./AppMode_Error.d ./AppMode_Error.o ./AppMode_Error.src ./AppMode_Idle.d ./AppMode_Idle.o ./AppMode_Idle.src ./AppMode_Init.d ./AppMode_Init.o ./AppMode_Init.src ./AppMode_Operation.d ./AppMode_Operation.o ./AppMode_Operation.src ./AppScheduling.d ./AppScheduling.o ./AppScheduling.src ./Cpu0_Main.d ./Cpu0_Main.o ./Cpu0_Main.src ./Driver_Adc.d ./Driver_Adc.o ./Driver_Adc.src ./Driver_Asc.d ./Driver_Asc.o ./Driver_Asc.src ./Driver_Can.d ./Driver_Can.o ./Driver_Can.src ./Driver_Gtm.d ./Driver_Gtm.o ./Driver_Gtm.src ./Driver_Port.d ./Driver_Port.o ./Driver_Port.src ./Driver_Stm.d ./Driver_Stm.o ./Driver_Stm.src ./Driver_Watchdog.d ./Driver_Watchdog.o ./Driver_Watchdog.src

.PHONY: clean--2e-

