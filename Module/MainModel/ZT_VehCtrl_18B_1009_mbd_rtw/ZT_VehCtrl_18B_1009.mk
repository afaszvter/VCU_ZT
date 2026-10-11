#
# File    : mbd_mpc574x.tmf
#
# Abstract:
#       Template makefile used to create <model>.mkfile for target.
#
#       This makefile attempts to conform to the guidelines specified in the
#       IEEE Std 1003.2-1992 (POSIX) standard. It is designed to be used
#       with GNU Make (gmake) which is located in matlabroot/bin/win64.
#
#       Note that this template is automatically customized by the build
#       procedure to create "<model>.mk"
#
#       The following defines can be used to modify the behavior of the
#       build:
#         OPT_OPTS       - Optimization options. efault is none. To enable
#                          debugging specify as OPT_OPTS=-g4.
#         OPTS           - User specific compile options.
#         USER_SRCS      - Additional user sources, such as files needed by
#                          S-functions.
#         USER_INCLUDES  - Additional include paths
#                          (i.e. USER_INCLUDES="-Iwhere-ever -Iwhere-ever2")
#                          (For Lcc, have a '/'as file seperator before the
#                          file name instead of a '\' .
#                          i.e.,  d:\work\proj1/myfile.c - reqd for 'gmake')
#       This template makefile is designed to be used with a system target
#       file that contains 'rtwgensettings.BuildDirSuffix' see ert.tlc
#
# Copyright (c) 2018 NXP.
# All rights reserved.
#


#------------------------ Macros read by make_rtw ------------------------------
#
# The following macros are read by the build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the build procedure (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD         = "%MATLAB%\bin\win64\gmake"
SHELL           = cmd
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = any
COMPILER_TOOL_CHAIN = default
BUILD_SUCCESS   = *** Created executable:


#---------------------- Tokens expanded by make_rtw ----------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# build procedure.
#
#  MODEL_NAME          - Name of the Simulink block diagram
#  MODEL_MODULES       - Any additional generated source modules
#  MAKEFILE_NAME       - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT         - Path to where MATLAB is installed.
#  MATLAB_BIN          - Path to MATLAB executable.
#  S_FUNCTIONS         - List of additional S-function modules.
#  S_FUNCTIONS_LIB     - List of S-functions libraries to link.
#  NUMST               - Number of sample times
#  NCSTATES            - Number of continuous states
#  BUILDARGS           - Options passed in at the command line.
#  MULTITASKING        - yes (1) or no (0): Is solver mode multitasking
#  INTEGER_CODE        - yes (1) or no (0): Is generated code purely integer
#  MAT_FILE            - yes (1) or no (0): Should mat file logging be done,
#                        if 0, the generated code runs indefinitely
#  EXT_MODE            - yes (1) or no (0): Build for external mode
#  TMW_EXTMODE_TESTING - yes (1) or no (0): Build ext_test.c for external mode
#                        testing.
#  EXTMODE_TRANSPORT   - Index of transport mechanism (e.g. tcpip, serial) for extmode
#  EXTMODE_STATIC      - yes (1) or no (0): Use static instead of dynamic mem alloc.
#  EXTMODE_STATIC_SIZE - Size of static memory allocation buffer.
#  MULTI_INSTANCE_CODE - Is the generated code multi instantiable (1/0)?
#  PORTABLE_WORDSIZES  - Is this build intented for SIL simulation with portable word sizes (1/0)?
#  SHRLIBTARGET        - Is this build intended for generation of a shared library instead
#                        of executable (1/0)?
#  MAKEFILEBUILDER_TGT - Is this build performed by the MakefileBuilder class
#                        e.g. to create a PIL executable?
#  STANDALONE_SUPPRESS_EXE - Build the standalone target but only create object code modules
#                            and do not build an executable

MODEL                = ZT_VehCtrl_18B_1009
MODULES              = ZT_VehCtrl_18B_1009_data.c adc0_params.c adc1_params.c etimer0_channel2_config.c etimer0_channel3_config.c etimer0_channel5_config.c etimer1_channel1_config.c etimer1_channel2_config.c etimer1_channel3_config.c etimer2_channel2_config.c fcan0_mpc_event_callback.c fcan1_mpc_event_callback.c freemaster_interface_init.c mbd_main.c rtGetInf.c rtGetNaN.c rt_nonfinite.c rt_zcfcn.c adc_sar_driver.c clock_MPC57xx.c dspi_driver.c edma_driver.c edma_hw_access.c edma_irq.c etimer_driver.c etimer_hw_access.c flexcan_driver.c flexcan_hw_access.c flexcan_irq.c freemaster_MPC57xx.c freemaster_appcmd.c freemaster_can.c freemaster_protocol.c freemaster_rec.c freemaster_scope.c freemaster_sfio.c freemaster_tsa.c interrupt_manager_MPC57xx.c mbdt_adc.c mbdt_clock.c mpc_clock_init.c mpc_clock_man_panther.c osif_baremetal.c pins_siul2_driver.c pit_driver.c pit_hw_access.c power_manager.c power_manager_MPC57xx.c power_mc_me_hw_access.c siul2_hw_access.c startup.c system_MPC5744P.c
MAKEFILE             = ZT_VehCtrl_18B_1009.mk
MATLAB_ROOT          = D:\Matlab18b
ALT_MATLAB_ROOT      = D:\Matlab18b
START_DIR            = D:\VCU\VCU_SL_ZhengZhou\ZT2\Module\MainModel
S_FUNCTIONS          = 
S_FUNCTIONS_LIB      = 
SOLVER               = 
NUMST                = 1
TID01EQ              = 0
NCSTATES             = 0
MEM_ALLOC            = RT_STATIC
COMPUTER             = PCWIN64
BUILDARGS            =  GENERATE_ERT_S_FUNCTION=0 INCLUDE_MDL_TERMINATE_FCN=1 COMBINE_OUTPUT_UPDATE_FCNS=1 MULTI_INSTANCE_CODE=0 INTEGER_CODE=0 ISPROTECTINGMODEL=NOTPROTECTING
MULTITASKING         = 0
MAT_FILE             = 0
GENERATE_ASAP2 	     = 0
EXT_MODE             = 0
TMW_EXTMODE_TESTING  = 0
EXTMODE_TRANSPORT    = 0
EXTMODE_STATIC       = 0
EXTMODE_STATIC_SIZE  = 1000000
TARGET_FAMILY        = P
COPY_DEST_DIR        = 
TBX_SRCS             = 

MAKEFILEBUILDER_TGT = 0
STANDALONE_SUPPRESS_EXE = 0
GEN_SAMPLE_MAIN = 0

MODELREFS            = 
SHARED_SRC           = 
SHARED_SRC_DIR       = 
SHARED_BIN_DIR       = 
SHARED_LIB           = 
SHARED_LIB_LINK      = $(subst /,\,$(SHARED_LIB))
LIB_SKIP             = rt_logging.o avi_rt.o

#---------------------- User defined tokens ------------------------------------

TARGET_MCU				= MPC5744P
TARGET_COMPILER			= S32 Design Studio
TARGET_MEMORY			= FLASH
TARGET_CORE_INDEX       = 0
MC_LIB_NAME             = MPC574xP_AMMCLIB.a
DIAB_CPU_NAME           = PPCE200Z4251N3VEF:simple
GCC_CPU_NAME            = e200z4
GHS_CPU_NAME            = ppc5746mz425

#--------------------------- GHS -----------------------
GHS_TARGET_CC_OPTS		= -noSPE -preprocess_assembly_files -g -dwarf2 -noSPE -filetype.c
GHS_TARGET_ASM_OPTS		= -noSPE -preprocess_assembly_files -g -dwarf2 -e _start_core -srec -filetype.assembly
GHS_TARGET_LINK_OPTS	= 
GHS_TARGET_LIB_OPTS		= 
#--------------------------- DIAB -----------------------
DIAB_TARGET_CC_OPTS		= -@E+err.log -c -g -Xenum-is-best -Xlint -Xnested-interrupts -Xdebug-local-cie -Xclib-optim-off -Xc-new -Xapu-lsp
DIAB_TARGET_ASM_OPTS	= -@E+err.log -l -g -Xapu-lsp
DIAB_TARGET_LINK_OPTS	= -@E+err.log -Ws -m6 -lc -lm
DIAB_TARGET_LIB_OPTS	= 
#--------------------------- GCC -----------------------
S32DS_TARGET_CC_OPTS	= -g3 -mbig -mvle -O1 -mregnames -mlsp -specs=ewl_c9x.specs -mhard-float -Wall -c -std=c99 -fdata-sections -ffunction-sections -funsigned-char -fmessage-length=0 -nostdinc -fno-jump-tables -mlsp
S32DS_TARGET_ASM_OPTS	= -g3 -mbig -mvle -mregnames -mlsp
S32DS_TARGET_LINK_OPTS	= -Xlinker --gc-sections -mhard-float
S32DS_TARGET_LIB_OPTS	= 

#----------Parse TARGET_MCU and get only the processor family -----------------
TMPVAL = $(subst -, ,$(TARGET_MCU))

include_opt = I
define_opt = D

#--------------------------- Model and reference models -----------------------
MODELLIB                  = ZT_VehCtrl_18B_1009lib.lib
MODELREF_LINK_LIBS        = 
MODELREF_INC_PATH         = 
RELATIVE_PATH_TO_ANCHOR   = ..
# NONE: standalone, SIM: modelref sim, RTW: modelref coder target
MODELREF_TARGET_TYPE      = NONE

#-- In the case when directory name contains space ---
ifneq ($(MATLAB_ROOT),$(ALT_MATLAB_ROOT))
  MATLAB_ROOT := $(ALT_MATLAB_ROOT)
endif
ifneq ($(MATLAB_BIN),$(ALT_MATLAB_BIN))
  MATLAB_BIN := $(ALT_MATLAB_BIN)
endif

#----------------------------- External mode -----------------------------------
# Uncomment -DVERBOSE to have information printed to stdout
# To add a new transport layer, see the comments in
#   <matlabroot>/toolbox/simulink/simulink/extmode_transports.m
ifeq ($(EXT_MODE),1)
  EXT_CC_OPTS = -DEXT_MODE -DWIN32 # -DVERBOSE
  ifeq ($(EXTMODE_TRANSPORT),0) #serial_win32
    EXT_SRC  = ext_svr.c updown.c ext_work.c ext_svr_serial_transport.c
    EXT_SRC += ext_serial_pkt.c rtiostream_serial_interface.c rtiostream_serial.c
    EXT_CC_OPTS += -DEXTMODE_DISABLE_ARGS_PROCESSING -DEXTMODE_DISABLEPRINTF
  endif
  ifeq ($(TMW_EXTMODE_TESTING),1)
    EXT_SRC     += ext_test.c
    EXT_CC_OPTS += -DTMW_EXTMODE_TESTING
  endif
  ifeq ($(EXTMODE_STATIC),1)
    EXT_SRC     += mem_mgr.c
    EXT_CC_OPTS += -DEXTMODE_STATIC -DEXTMODE_STATIC_SIZE=$(EXTMODE_STATIC_SIZE)
  endif
endif

#------------------------------ Include Path -----------------------------------

MATLAB_INCLUDES = \
	 -$(include_opt)"$(MATLAB)\simulink\include" \
	 -$(include_opt)"$(MATLAB)\extern\include" \
	 -$(include_opt)"$(MATLAB)\rtw\c\src" \
	 -$(include_opt)"$(MATLAB)\rtw\c\libsrc" \
	 -$(include_opt)"$(MATLAB)\rtw\c\src\ext_mode\common" \
	 -$(include_opt)"$(MATLAB)\rtw\c\src\ext_mode\tcpip" \
	 -$(include_opt)"$(MATLAB)\rtw\c\src\ext_mode\serial" \
	 -$(include_opt)"$(MATLAB)\rtw\c\src\ext_mode\custom"

# Additional includes
ADD_INCLUDES = \
	-$(include_opt)$(START_DIR) \
	-$(include_opt)$(START_DIR)\ZT_VehCtrl_18B_1009_mbd_rtw \
	-$(include_opt)$(MATLAB_ROOT)\extern\include \
	-$(include_opt)$(MATLAB_ROOT)\simulink\include \
	-$(include_opt)$(MATLAB_ROOT)\rtw\c\src \
	-$(include_opt)$(MATLAB_ROOT)\rtw\c\src\ext_mode\common \
	-$(include_opt)$(MATLAB_ROOT)\rtw\c\ert \
	-$(include_opt)$(MATLAB_ROOT)\toolbox\shared\can\src\scanutil \


SHARED_INCLUDES =
ifneq ($(SHARED_SRC_DIR),)
SHARED_INCLUDES = -$(include_opt)$(SHARED_SRC_DIR)
endif

#------------------------------ Libraries -----------------------------------

LIBS =
 
 

LIBS =
 
 

#---------------------------------TOOLCHAIN------------------------------------
#----------------- Define tools to build using command line -------------------
#------------------------------------------------------------------------------

#=== Diab ========================
ifeq ($(TARGET_COMPILER), DIAB)
	TOOL_ROOT=$(DIAB_TOOL)
	CMDLINE_TOOLS=$(TOOL_ROOT)/WIN32/bin
	TOOL_SPECIFIC_FILES=Diab_specific_files
	CC="$(CMDLINE_TOOLS)/dcc"
	AS="$(CMDLINE_TOOLS)/dcc"
	LIBCMD="$(CMDLINE_TOOLS)/dar"
	LD="$(CMDLINE_TOOLS)/dld"
	ELF_TOOL="$(CMDLINE_TOOLS)/ddump"

	PPC_CPU= "$(DIAB_CPU_NAME)"

	TOOL_OPTS=


	CC_OPTS= -c $(TOOL_OPTS) $(DIAB_TARGET_CC_OPTS) -t$(PPC_CPU) -Xdialect-ansi -D__vle=1 -D__PPC_VLE__=1 -Ddo_not_use_inline=1 -Xdialect-c99 -DCPU_$(TARGET_MCU) -DTURN_ON_CPU$(TARGET_CORE_INDEX)
	AS_OPTS= -c $(TOOL_OPTS) $(DIAB_TARGET_ASM_OPTS) -t$(PPC_CPU) -D__vle=1 -D__PPC_VLE__=1 -Ddo_not_use_inline=1 -Xpreprocess-assembly -DCPU_$(TARGET_MCU) -DTURN_ON_CPU$(TARGET_CORE_INDEX)
	LIBCMD_OPTS = $(DIAB_TARGET_LIB_OPTS)
	LD_OPTS= $(DIAB_TARGET_LINK_OPTS) -t$(PPC_CPU) -Xremove-unused-sections -Xpreprocess-lecl
	# -lcf $(LCF_FILE)

	TOOL_INCLUDES= -I$(TOOL_ROOT)/include/diab
	LIB_SUFFIX = DIAB
	TOOL_CFiles=
	CFLAGS_MODE =
	AFLAGS_MODE =
	LFLAGS_MODE =

	#Linker map
	LINK_FILE_NAME = MPC574x.dld

	#value for use in build part
	LD_PREFIX = -Wm $(LINK_MAP) -e _start > $(MODEL).map
	ELF_TOOL_PREFIX =  -tv $(MODEL).elf >>$(MODEL).map
	COMP_TOOL_PREFIX =
	ASM_TOOL_PREFIX  = -o
endif
#=== S32DS ========================
ifeq ($(TARGET_COMPILER), S32 Design Studio)
	TOOL_ROOT=$(S32DS_PA_TOOL)/S32DS/build_tools/powerpc-eabivle-4_9
	CMDLINE_TOOLS=$(TOOL_ROOT)/bin
	TOOL_SPECIFIC_FILES=s32ds_specific_files
	CC="$(CMDLINE_TOOLS)/powerpc-eabivle-gcc"
	AS="$(CMDLINE_TOOLS)/powerpc-eabivle-gcc"
	LIBCMD="$(CMDLINE_TOOLS)/powerpc-eabivle-ar"
	LD="$(CMDLINE_TOOLS)/powerpc-eabivle-gcc"
	ELF_TOOL="$(CMDLINE_TOOLS)/powerpc-eabivle-objcopy"
	E200_TOOL=$(S32DS_PA_TOOL)/S32DS/build_tools/e200_ewl2

	TOOL_OPTS=

	ifeq ($(TARGET_MEMORY), SRAM)
		CC_OPTS= $(TOOL_OPTS) -DCPU_$(TARGET_MCU) -mcpu=$(GCC_CPU_NAME) --sysroot="$(E200_TOOL)" $(S32DS_TARGET_CC_OPTS) -DTURN_ON_CPU$(TARGET_CORE_INDEX)
	else
		CC_OPTS= $(TOOL_OPTS) -DCPU_$(TARGET_MCU) -mcpu=$(GCC_CPU_NAME) -DSTART_FROM_FLASH --sysroot="$(E200_TOOL)" $(S32DS_TARGET_CC_OPTS) -DTURN_ON_CPU$(TARGET_CORE_INDEX)
	endif
	AS_OPTS= -c $(TOOL_OPTS) $(S32DS_TARGET_ASM_OPTS) -DTURN_ON_CPU$(TARGET_CORE_INDEX)
	LIBCMD_OPTS = $(S32DS_TARGET_LIB_OPTS)
	LD_OPTS= $(TOOL_OPTS) -mcpu=$(GCC_CPU_NAME) -specs=ewl_c9x.specs --sysroot="$(E200_TOOL)" $(S32DS_TARGET_LINK_OPTS) -DTURN_ON_CPU$(TARGET_CORE_INDEX)

    TOOL_INCLUDES= -I"$(E200_TOOL)/EWL_C/include" \
			 -I"$(E200_TOOL)/EWL_C/include/pa"
	LIB_SUFFIX = GCC
	TOOL_CFiles=
	CFLAGS_MODE =
	AFLAGS_MODE =
	LFLAGS_MODE =

	#Linker map
	LINK_FILE_NAME = MPC574x.ld

	#value for use in build part
	LD_PREFIX = -T $(LINK_MAP) -Wl,-Map,"$(MODEL).map" -e _start
	ELF_TOOL_PREFIX =
	COMP_TOOL_PREFIX =
	ASM_TOOL_PREFIX  = -o
endif
#=== GreenHills Multi ========================
ifeq ($(TARGET_COMPILER), GreenHills Multi)
	TOOL_ROOT=$(GHS_TOOL)
	CMDLINE_TOOLS=$(TOOL_ROOT)
	TOOL_SPECIFIC_FILES=ghs_specific_files
	CC="$(CMDLINE_TOOLS)/ccppc"
	AS="$(CMDLINE_TOOLS)/ccppc"
	LIBCMD="$(CMDLINE_TOOLS)/ccppc"
	GSREC_TOOL="$(CMDLINE_TOOLS)/gsrec"
	LD="$(CMDLINE_TOOLS)/elxr"
	ELF2BIN="$(CMDLINE_TOOLS)/gmemfile.exe"
	ELF2SREC="$(CMDLINE_TOOLS)/gsrec.exe"

    PPC_CPU= -cpu=$(GHS_CPU_NAME)

    TOOL_OPTS= $(PPC_CPU) -DCPU_$(TARGET_MCU) -vle -floatsingle --gnu_asm -G -fno-common -nostartfiles -sda=0 -gdwarf-2  -Ogeneral -Oslowcompile -Ospeed -Omax -OI -OL -Ounroll -Ounrollbig -w -entry=Reset_Handler

	CC_OPTS_GENERAL=$(TOOL_OPTS) $(PPC_CPU) -DCPU_$(TARGET_MCU) -DTURN_ON_CPU$(TARGET_CORE_INDEX) -dual_debug -gdwarf-2

	ifeq ($(TARGET_MEMORY), SRAM)
		CC_OPTS= $(CC_OPTS_GENERAL) $(GHS_TARGET_CC_OPTS)
	else
		CC_OPTS= $(CC_OPTS_GENERAL) -DSTART_FROM_FLASH $(GHS_TARGET_CC_OPTS)
	endif
	AS_OPTS = -preprocess_assembly_files $(PPC_CPU) -DCPU_$(TARGET_MCU) -DTURN_ON_CPU$(TARGET_CORE_INDEX) -vle -gdwarf-2 $(TOOL_OPTS) $(GHS_TARGET_ASM_OPTS)
	LIBCMD_OPTS = -archive $(TOOL_OPTS) $(GHS_TARGET_LIB_OPTS)
	LD_OPTS= $(TOOL_OPTS) -DTURN_ON_CPU$(TARGET_CORE_INDEX) $(GHS_TARGET_LINK_OPTS)



	TOOL_INCLUDES=
	PLIB_TEMP = precomp
	LIB_TEMP  = libs
	LIB_SUFFIX = GHS
	#Linker map
	LINK_FILE_NAME = MPC574x.ld

	CFLAGS_MODE = -c -MD
	AFLAGS_MODE =
	LFLAGS_MODE =
	#value for use in build part
	LD_PREFIX =  -keepmap -MD    -e=_start  $(LINK_MAP) -nostartfiles
	COMP_TOOL_PREFIX = -c -MD
	ELF_TOOL =
	ASM_TOOL_PREFIX  = -c -MD $< -o
endif

#---------------------------------- SDK ---------------------------------------

CMSIS_INCLUDES  = \
    -$(include_opt)"./common" \
    -$(include_opt)"./inc" \
    -$(include_opt)"./src/clock/MPC57xx" \
    -$(include_opt)"./src/clock/MPC5777C" \
    -$(include_opt)"./src/sim/$(TARGET_MCU)" \
    -$(include_opt)"./src/power/MPC57xx" \
    -$(include_opt)"./src/pins/siul2" \
    -$(include_opt)"./src/pins/siu" \
    -$(include_opt)"./$(TARGET_MCU)/include" \
    -$(include_opt)"../common" \
    -$(include_opt)"../inc" \
    -$(include_opt)"../src/clock/MPC57xx" \
    -$(include_opt)"../src/clock/MPC5777C" \
    -$(include_opt)"../src/sim/$(TARGET_MCU)" \
    -$(include_opt)"../src/power/MPC57xx" \
    -$(include_opt)"../src/pins/siul2" \
    -$(include_opt)"../src/pins/siu" \
    -$(include_opt)"../$(TARGET_MCU)/include" \
    -$(include_opt)"../instrumented/common" \
    -$(include_opt)"../instrumented/inc" \
    -$(include_opt)"../instrumented/src/clock/MPC57xx" \
    -$(include_opt)"../instrumented/src/sim/$(TARGET_MCU)" \
    -$(include_opt)"../instrumented/src/power/MPC57xx" \
    -$(include_opt)"../instrumented/src/pins/siul2" \
    -$(include_opt)"../instrumented/$(TARGET_MCU)/include"

#------------------------------------------------------------------------------

LIB_TEMP  = libs

#------------------------------------------------------------------------------
#------------------------------------------------------------------------------
#------------------------------------------------------------------------------

INCLUDES =  -$(include_opt). \
	-$(include_opt).. \
	-$(include_opt)../instrumented \
	-$(include_opt)$(RELATIVE_PATH_TO_ANCHOR) \
	$(MATLAB_INCLUDES) \
	$(ADD_INCLUDES) \
	$(TOOL_INCLUDES) \
	$(USER_INCLUDES) \
	$(MODELREF_INC_PATH) \
	$(SHARED_INCLUDES) \
	$(CMSIS_INCLUDES) \
  	$(INSTRUMENT_INCLUDES)

#-------------------- Definitons for application files: -----------------------
#
# C_SRCS       = all application specific C source files.
# S_SRCS       = all application specific assembly source files.
# APP_INCS     = all application specific include files.
#

# Startup extension files differs between compilers
STARTUP_FILE_EXTENSION=s
ifeq ($(TARGET_COMPILER), S32 Design Studio)
    STARTUP_FILE_EXTENSION=S
endif

S_SRCS_LIST = core$(TARGET_CORE_INDEX)_intc_sw_handlers.$(STARTUP_FILE_EXTENSION) interrupt_vectors.$(STARTUP_FILE_EXTENSION) startup_$(TARGET_MCU).$(STARTUP_FILE_EXTENSION)

LINK_MAP = $(LINK_FILE_NAME)
ifneq ("$(MC_LIB_NAME)","")
    TOOL_LIB = $(MC_LIB_NAME)
endif

# Generating append prefix
ifeq ("$(COPY_DEST_DIR)", "")
    INSTR_PREFIX = ..
else
    INSTR_PREFIX = ..\instrumented
endif

C_SRCS_LIST = $(S_FUNCTIONS)
ifeq ($(MODELREF_TARGET_TYPE), NONE)
  ifeq ($(MAKEFILEBUILDER_TGT),1)
    #----------- MODELREF_TARGET_TYPE = NONE  MAKEFILEBUILDER_TGT = 1
    # Top-level model for PIL RTW
    PRODUCT                  = $(MODEL).mot
    BUILD_PRODUCT_TYPE       = executable
    # We reuse the prebuilt objects from the PIL block or the referenced model.
    PREBUILT_OBJS           += $(MODULES:.c=.o)
    SKIP_MODELREF_LINK_LIBS  = .. ../instrumented
    MODELREF_LINK_LIBS      := $(filter-out $(SKIP_MODELREF_LINK_LIBS),$(MODELREF_LINK_LIBS))
    S_SRCS                  := $(addprefix $(INSTR_PREFIX)\, $(S_SRCS_LIST))
    TOOL_LIB                := $(addprefix $(INSTR_PREFIX)\, $(TOOL_LIB))
    LINK_MAP                := $(addprefix $(INSTR_PREFIX)\, $(LINK_MAP))
  else
    ifeq ($(STANDALONE_SUPPRESS_EXE),1)
      #----------- MODELREF_TARGET_TYPE = NONE  MAKEFILEBUILDER_TGT = 0  STANDALONE_SUPPRESS_EXE = 1
      #--- Build library only for top level model
      # PIL block, Autosar PIL
      PRODUCT            = ObjectModulesOnly
      BUILD_PRODUCT_TYPE = object modules
      C_SRCS_LIST      += $(MODULES) $(TBX_SRCS) $(MODEL).c $(EXT_SRC)
    else
      #----------- MODELREF_TARGET_TYPE = NONE  MAKEFILEBUILDER_TGT = 0  STANDALONE_SUPPRESS_EXE = 0
      #--- Stand-alone model (.exe) ---
      # Top-level model for Build RTW
      PRODUCT            = $(MODEL).mot
      BUILD_PRODUCT_TYPE = executable
      C_SRCS_LIST       += $(MODULES) $(TBX_SRCS) $(MODEL).c $(EXT_SRC)
      S_SRCS            := $(S_SRCS_LIST)
    endif
  endif
else
  #----------- MODELREF_TARGET_TYPE = RTW,SIM
  #--- Model reference coder target
  PRODUCT             = $(MODELLIB)
  BUILD_PRODUCT_TYPE  = library
  C_SRCS_LIST       += $(MODULES) $(TBX_SRCS)
  TOOL_LIB :=
endif

C_SRCS = $(sort $(C_SRCS_LIST))

CFLAGS = $(INCLUDES) \
	$(CFLAGS_MODE) \
	$(EXT_CC_OPTS) \
	$(OPTS)

AFLAGS = $(AFLAGS_MODE)

LFLAGS =	$(TOOL_LIB) \
			$(LIBS) \
			$(EXT_LIB) \
			$(LFLAGS_MODE) \
			$(S_FUNCTIONS_LIB)

#
#------------------------ Construct the object file lists------------------------
#
C_OBJS = $(C_SRCS:.c=.o)
ifeq ($(TARGET_COMPILER), S32 Design Studio)
	S_OBJS = $(S_SRCS:.S=.o)
else
	S_OBJS = $(S_SRCS:.s=.o)
endif
OBJS = $(S_OBJS) $(C_OBJS)

SHARED_SRC := $(subst \,/,$(SHARED_SRC))
SHARED_SRC := $(wildcard $(SHARED_SRC))
SHARED_OBJS = $(addsuffix .o, $(basename $(SHARED_SRC)))
#
#----------------------- make all variables available to sub-makes---------------
#
export

#
#---------------------------------------Build rules------------------------------
#

RM = @del /F
all : clean SetupFiles $(PRODUCT)
	@echo Building target $@
	@echo $(BUILD_SUCCESS) $(PRODUCT)

clean:
	@echo Cleaning...
	@echo RELATIVE_PATH_TO_ANCHOR is $(RELATIVE_PATH_TO_ANCHOR)
	@echo ==== Removing object files from build directory ====
	@if exist $(PRODUCT) del $(PRODUCT)
	@if exist *.o $(RM) *.o
	@if exist *.obj $(RM) *.obj
	@if exist *.elf $(RM) *.elf
	@if exist *.s19 $(RM) *.s19
	@if exist *.out $(RM) *.out
	@if exist *.mot $(RM) *.mot
	@if exist *.bin $(RM) *.bin
	@if exist *.srz $(RM) *.srz
	@if exist *.d   $(RM) *.d
	@if exist *.dbo $(RM) *.dbo
	@if exist *.rsp $(RM) *.rsp
	@if exist *.lst  $(RM) *.lst
	@if exist err.log $(RM) err.log
	@if exist *.dbo  $(RM) *.dbo
	@if exist *.dla  $(RM) *.dla
	@if exist *.dnm  $(RM) *.dnm
	@if exist *.dep  $(RM) *.dep
	@if exist *.inf  $(RM) *.inf


SetupFiles:
	@echo Copying necessary files to build directory...
	@echo Compiler details : $(CC) $(CC_OPTS) $(CFLAGS)
	@echo Assembler details : $(AS) $(AS_OPTS) $(AFLAGS)
	@echo Product: $(PRODUCT)
	@echo Build product type: $(BUILD_PRODUCT_TYPE)

$(MODEL).mot: $(MODEL).elf
	@echo Generating S-record...
    ifeq ($(TARGET_COMPILER), S32 Design Studio)
	$(ELF_TOOL) -O srec $(MODEL).elf $(MODEL).mot
    endif
    ifeq ($(TARGET_COMPILER), DIAB)
	$(ELF_TOOL) -Rv -o $(MODEL).mot $(MODEL).elf
    endif
    ifeq ($(TARGET_COMPILER), GreenHills Multi)
	$(GSREC_TOOL) -auto -o $(MODEL).mot $(MODEL).elf
    endif
	@echo Created S-record: $(MODEL).mot

#--------------------------------- Rules ---------------------------------------
ifeq ($(MODELREF_TARGET_TYPE),NONE)
ifeq ($(MAKEFILEBUILDER_TGT), 1)
#----------- MAKEFILEBUILDER_TGT = 1
$(MODEL).elf: $(PREBUILT_OBJS) $(OBJS) $(MODELLIB) $(SHARED_LIB) $(LIBS) $(SRC_DEP) $(MODELREF_LINK_LIBS)
	@echo ### Creating $(BUILD_PRODUCT_TYPE): $@
    ifeq ($(TARGET_COMPILER), S32 Design Studio)
	$(LD) $(LD_OPTS) $(PREBUILT_OBJS) $(OBJS) $(MODELLIB) $(MODELREF_LINK_LIBS) $(SHARED_LIB_LINK) $(LIBS) -o $@ $(LFLAGS) $(LD_PREFIX)
    endif
    ifeq ($(TARGET_COMPILER), DIAB)
	$(LD) $(LD_OPTS) $(PREBUILT_OBJS) $(OBJS) $(MODELLIB) $(MODELREF_LINK_LIBS) $(SHARED_LIB_LINK) $(LIBS) -o $@ $(LFLAGS) $(LD_PREFIX)
	$(ELF_TOOL) $(ELF_TOOL_PREFIX)
    endif
    ifeq ($(TARGET_COMPILER), GreenHills Multi)
	$(CC) $(LD_OPTS) -keepmap -MD $(PREBUILT_OBJS) $(OBJS) $(MODELLIB) $(MODELREF_LINK_LIBS) $(SHARED_LIB_LINK) $(LIBS) -e=_start -o $@ $(LINK_MAP) -nostartfiles $(LFLAGS)
    endif
	@echo ### Created $(BUILD_PRODUCT_TYPE): $@
else
ifeq ($(STANDALONE_SUPPRESS_EXE), 1)
#----------- MAKEFILEBUILDER_TGT = 0  STANDALONE_SUPPRESS_EXE = 1
.PHONY: $(PRODUCT)
$(PRODUCT): $(OBJS) $(SHARED_LIB) $(LIBS) $(SRC_DEP) $(MODELREF_LINK_LIBS)
	@echo ### Created $(BUILD_PRODUCT_TYPE): $(PRODUCT)
else
#----------- MAKEFILEBUILDER_TGT = 0  STANDALONE_SUPPRESS_EXE = 0
$(MODEL).elf: $(OBJS) $(SHARED_LIB) $(LIBS) $(SRC_DEP) $(MODELREF_LINK_LIBS)
    ifeq ($(TARGET_COMPILER), S32 Design Studio)
	$(LD) $(LD_OPTS) $(OBJS) $(MODELREF_LINK_LIBS) $(SHARED_LIB_LINK) $(LIBS) -o $@ $(LFLAGS) $(LD_PREFIX)
    endif
    ifeq ($(TARGET_COMPILER), DIAB)
	$(LD) $(LD_OPTS) $(OBJS) $(MODELREF_LINK_LIBS) $(SHARED_LIB_LINK) $(LIBS) -o $@ $(LFLAGS) $(LD_PREFIX)
	$(ELF_TOOL) $(ELF_TOOL_PREFIX)
    endif
    ifeq ($(TARGET_COMPILER), GreenHills Multi)
	$(CC) $(LD_OPTS) -keepmap -MD $(OBJS) $(MODELREF_LINK_LIBS) $(SHARED_LIB_LINK) $(LIBS) -e=_start -o $@ $(LINK_MAP) -nostartfiles $(LFLAGS)
    endif
	@echo ### Created $(BUILD_PRODUCT_TYPE): $(PRODUCT)
endif
endif

else
ifeq ($(MODELREF_TARGET_TYPE),SIM)
else
$(MODELLIB): $(OBJS) $(SHARED_OBJS) $(SRC_DEP)
	@if exist $(MODELLIB) $(RM) "$(MODELLIB)"
    ifeq ($(TARGET_COMPILER), S32 Design Studio)
	$(LIBCMD) rcs $(LIBCMD_OPTS) $@ $(OBJS) $(SHARED_OBJS)
    endif
    ifeq ($(TARGET_COMPILER), DIAB)
	$(LIBCMD) -q $@ $(LIBCMD_OPTS) $(OBJS) $(SHARED_OBJS)
    endif
    ifeq ($(TARGET_COMPILER), GreenHills Multi)
	$(LIBCMD) -Q -o $@ $(LIBCMD_OPTS) $(OBJS) $(SHARED_OBJS)
    endif
	@cmd /C "echo ### Created $(MODELLIB)"
	@cmd /C "echo ### Created $(BUILD_PRODUCT_TYPE): $@"
endif
endif

%.o : %.c
	@echo Building file $@...
    ifeq ($(TARGET_COMPILER), GreenHills Multi)
	$(CC) -c -MD $(CFLAGS) $(CC_OPTS) $< -o $@
    else
	$(CC) $(CC_OPTS) $(CFLAGS) -o $@ $(@:.o=.c)
    endif

%.o : ../%.c
	@echo Building file $@...
    ifeq ($(TARGET_COMPILER), GreenHills Multi)
	$(CC) -c -MD $(CFLAGS) $(CC_OPTS) $< -o $@
    else
	$(CC) $(CC_OPTS) $(CFLAGS) -o $@ $(@:.o=.c)
    endif

%.o : %.S
	@echo Building file $@...
    ifeq ($(TARGET_COMPILER), GreenHills Multi)
	$(CC) -c -MD $(AFLAGS) $(AS_OPTS) $< -o $@
    else
	$(AS) $(AS_OPTS) -I.. $(AFLAGS) -o $@ $(@:.o=.S)
    endif

%.o : ../%.S
	@echo Building file $@...
    ifeq ($(TARGET_COMPILER), GreenHills Multi)
	$(CC) -c -MD $(AFLAGS) $(AS_OPTS) $< -o $@
    else
	$(AS) $(AS_OPTS) -I.. $(AFLAGS) -o $@ $(@:.o=.S)
    endif

%.o : %.s
	@echo Building file $@...
    ifeq ($(TARGET_COMPILER), GreenHills Multi)
	$(CC) -c -MD $(AFLAGS) $(AS_OPTS) $< -o $@
    else
	$(AS) $(AS_OPTS) -I.. $(AFLAGS) -o $@ $(@:.o=.s)
    endif

%.o : ../%.s
	@echo Building file $@...
    ifeq ($(TARGET_COMPILER), GreenHills Multi)
	$(CC) -c -MD $(AFLAGS) $(AS_OPTS) $< -o $@
    else
	$(AS) $(AS_OPTS) -I.. $(AFLAGS) -o $@ $(@:.o=.s)
    endif

###################################
%.o : $(MATLAB_ROOT)\rtw\c\src/%.c
	@echo ### "$(MATLAB_ROOT)\rtw\c\src\$*.c"o
	$(CC) -c $(CFLAGS) $(CC_OPTS) -o $@ $<
%.o : $(MATLAB_ROOT)\simulink\src/%.c
	@echo ### "$(MATLAB_ROOT)\simulink\src\$*.c"o
	$(CC) -c $(CFLAGS) $(CC_OPTS) -o $@ $<


#----------------------------- Dependencies ------------------------------------

$(SHARED_LIB) : $(SHARED_OBJS)
	@cmd /C "echo ### Creating $@"
    ifeq ($(TARGET_COMPILER), S32 Design Studio)
	$(LIBCMD) -rv $@ $(LIBCMD_OPTS) $(SHARED_OBJS)
    endif
    ifeq ($(TARGET_COMPILER), IAR)
	$(LIBCMD) $@ $(LIBCMD_OPTS) $(SHARED_OBJS)
    endif
    ifeq ($(TARGET_COMPILER), GreenHills Multi)
	$(LIBCMD) -Q -o $@ $(LIBCMD_OPTS) $(SHARED_OBJS)
    endif
	@cmd /C "echo ### $@ Created"

# EOF: mbd_mpc574x.tmf
