# Simple Makefile that compiles all .c and .s files in the same folder
#

# NOTE: If you move this project you can change the directory 
#       to match your GBDK root directory (ex: GBDK_HOME = "/home/user/GBDK/")
GBDK_HOME = ../gbdk/

LCC = $(GBDK_HOME)bin/lcc
LCCFLAGS += -Wa-l -Wl-m -Wl-j -v 

# You can uncomment the line below to turn on debug output
# LCCFLAGS += -debug

# You can set the name of the .gb ROM file here
PROJECTNAME    = Breakout

BINS        = $(PROJECTNAME).gb
CSOURCES   := $(wildcard src/*.c)
ASMSOURCES := $(wildcard src/*.s)

all:    $(BINS)

# Compile and link all source files in a single call to LCC
$(BINS): $(CSOURCES) $(ASMSOURCES)
		$(LCC) $(LCCFLAGS) -o $@ $(CSOURCES) $(ASMSOURCES)

clean:
		rm --verbose -f *.o *.lst *.map *.gb *.ihx *.sym *.cdb *.adb *.asm *.noi
