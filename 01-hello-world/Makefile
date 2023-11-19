#
# Simple Makefile that compiles all .c and .s files in the same folder
#

# If you move this project you can change the directory 
# to match your GBDK root directory (ex: GBDK_HOME = "C:/GBDK/"
GBDK_HOME = ../gbdk-2020/

LCC = $(GBDK_HOME)bin/lcc -Wa-l -Wl-m -Wl-j 

# You can uncomment the line below to turn on debug output
# LCCFLAGS += -debug # Uncomment to enable debug output
# LCCFLAGS += -v     # Uncomment for lcc verbose output

# You can set the name of the .gb ROM file here
PROJECTNAME    = Hello

BINS        = $(PROJECTNAME).gb
CSOURCES   := $(wildcard src/*.c)
ASMSOURCES := $(wildcard src/*.s)

all:    $(BINS)

# Compile and link all source files in a single call to LCC
$(BINS): $(CSOURCES) $(ASMSOURCES)
		$(LCC) $(LCCFLAGS) -o $@ $(CSOURCES) $(ASMSOURCES)

clean:
		rm -f *.o *.lst *.map *.gb *.ihx *.sym *.cdb *.adb *.asm