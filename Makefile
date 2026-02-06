CC = gcc

# Compiler flags
# 	-g	adds debugging info to the executable
#	-Wall turn on most but not all warnings 

CFLAGS = -g -Wall

TARGET = main

SRC_FILES = main.c 
BUILD_DIR = build

all: $(TARGET)

$(TARGET):$(TARGET).c
	$(CC) $(CFLAGS) -o ${BUILD_DIR}/$(TARGET) $(SRC_FILES) 

clean: 
	$(RM) $(BUILD_DIR)/*