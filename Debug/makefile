################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccs910/ccs/tools/compiler/ti-cgt-c2000_18.12.2.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./ad7606.obj" \
"./dac8554.obj" \
"./main.obj" \
"./Source/DSP2833x_ADC_cal.obj" \
"./Source/DSP2833x_Adc.obj" \
"./Source/DSP2833x_CSMPasswords.obj" \
"./Source/DSP2833x_CodeStartBranch.obj" \
"./Source/DSP2833x_CpuTimers.obj" \
"./Source/DSP2833x_DBGIER.obj" \
"./Source/DSP2833x_DMA.obj" \
"./Source/DSP2833x_DefaultIsr.obj" \
"./Source/DSP2833x_DisInt.obj" \
"./Source/DSP2833x_ECan.obj" \
"./Source/DSP2833x_ECap.obj" \
"./Source/DSP2833x_EPwm.obj" \
"./Source/DSP2833x_EQep.obj" \
"./Source/DSP2833x_GlobalVariableDefs.obj" \
"./Source/DSP2833x_Gpio.obj" \
"./Source/DSP2833x_I2C.obj" \
"./Source/DSP2833x_Mcbsp.obj" \
"./Source/DSP2833x_MemCopy.obj" \
"./Source/DSP2833x_PieCtrl.obj" \
"./Source/DSP2833x_PieVect.obj" \
"./Source/DSP2833x_Sci.obj" \
"./Source/DSP2833x_Spi.obj" \
"./Source/DSP2833x_SysCtrl.obj" \
"./Source/DSP2833x_Xintf.obj" \
"./Source/DSP2833x_usDelay.obj" \
"../CMD/28335_RAM_lnk.cmd" \
"../CMD/DSP2833x_Headers_nonBIOS.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include CMD/subdir_vars.mk
-include Source/subdir_vars.mk
-include subdir_rules.mk
-include CMD/subdir_rules.mk
-include Source/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
AD_test.out \

EXE_OUTPUTS__QUOTED += \
"AD_test.out" \

BIN_OUTPUTS += \
AD_test.hex \

BIN_OUTPUTS__QUOTED += \
"AD_test.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "AD_test.out"

# Tool invocations
AD_test.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: C2000 Linker'
	"C:/ti/ccs910/ccs/tools/compiler/ti-cgt-c2000_18.12.2.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi -z -m"AD_test.map" --stack_size=0x300 --warn_sections -i"C:/ti/ccs910/ccs/tools/compiler/ti-cgt-c2000_18.12.2.LTS/lib" -i"C:/ti/ccs910/ccs/tools/compiler/ti-cgt-c2000_18.12.2.LTS/include" --reread_libs --diag_wrap=off --display_error_number --xml_link_info="AD_test_linkInfo.xml" --rom_model -o "AD_test.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

AD_test.hex: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: C2000 Hex Utility'
	"C:/ti/ccs910/ccs/tools/compiler/ti-cgt-c2000_18.12.2.LTS/bin/hex2000"  -o "AD_test.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "ad7606.obj" "dac8554.obj" "main.obj" "Source\DSP2833x_ADC_cal.obj" "Source\DSP2833x_Adc.obj" "Source\DSP2833x_CSMPasswords.obj" "Source\DSP2833x_CodeStartBranch.obj" "Source\DSP2833x_CpuTimers.obj" "Source\DSP2833x_DBGIER.obj" "Source\DSP2833x_DMA.obj" "Source\DSP2833x_DefaultIsr.obj" "Source\DSP2833x_DisInt.obj" "Source\DSP2833x_ECan.obj" "Source\DSP2833x_ECap.obj" "Source\DSP2833x_EPwm.obj" "Source\DSP2833x_EQep.obj" "Source\DSP2833x_GlobalVariableDefs.obj" "Source\DSP2833x_Gpio.obj" "Source\DSP2833x_I2C.obj" "Source\DSP2833x_Mcbsp.obj" "Source\DSP2833x_MemCopy.obj" "Source\DSP2833x_PieCtrl.obj" "Source\DSP2833x_PieVect.obj" "Source\DSP2833x_Sci.obj" "Source\DSP2833x_Spi.obj" "Source\DSP2833x_SysCtrl.obj" "Source\DSP2833x_Xintf.obj" "Source\DSP2833x_usDelay.obj" 
	-$(RM) "ad7606.d" "dac8554.d" "main.d" "Source\DSP2833x_Adc.d" "Source\DSP2833x_CpuTimers.d" "Source\DSP2833x_DMA.d" "Source\DSP2833x_DefaultIsr.d" "Source\DSP2833x_ECan.d" "Source\DSP2833x_ECap.d" "Source\DSP2833x_EPwm.d" "Source\DSP2833x_EQep.d" "Source\DSP2833x_GlobalVariableDefs.d" "Source\DSP2833x_Gpio.d" "Source\DSP2833x_I2C.d" "Source\DSP2833x_Mcbsp.d" "Source\DSP2833x_MemCopy.d" "Source\DSP2833x_PieCtrl.d" "Source\DSP2833x_PieVect.d" "Source\DSP2833x_Sci.d" "Source\DSP2833x_Spi.d" "Source\DSP2833x_SysCtrl.d" "Source\DSP2833x_Xintf.d" 
	-$(RM) "Source\DSP2833x_ADC_cal.d" "Source\DSP2833x_CSMPasswords.d" "Source\DSP2833x_CodeStartBranch.d" "Source\DSP2833x_DBGIER.d" "Source\DSP2833x_DisInt.d" "Source\DSP2833x_usDelay.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

