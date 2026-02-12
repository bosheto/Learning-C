CC = gcc

# Compiler flags
# 	-g	adds debugging info to the executable
#	-Wall turn on most but not all warnings 
#	-S view ASM code 

CFLAGS = -g -Wall 
LIBS = -L./lib/ -lmylib
TARGET = main

SRC_FILES = main.c 
BUILD_DIR = build

all: clean $(TARGET)

$(TARGET):$(TARGET).c
	$(CC) $(CFLAGS) -o ${BUILD_DIR}/$(TARGET) $(SRC_FILES) $(LIBS)

clean: 
	$(RM) -r $(BUILD_DIR)/*