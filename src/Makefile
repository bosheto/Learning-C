CC = gcc

# Compiler flags
# 	-g	adds debugging info to the executable
#	-Wall turn on most but not all warnings 
#	-S view ASM code 

CFLAGS = -g -Wall 

TARGET = mylib

SRC_FILES = mylib.c
BUILD_DIR = ../build
LIB_DIR= ../lib

all: $(TARGET)

$(TARGET):mylib.c
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$(TARGET).o -c $(SRC_FILES)
	ar -rcs $(LIB_DIR)/libmylib.a $(BUILD_DIR)/mylib.o 