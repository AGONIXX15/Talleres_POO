CC=g++
CFLAGS= -Wall -I./include -std=c++11
OUTPUT_DIR=build
OUTPUT_FILE=main

compile: setup
	$(CC) $(CFLAGS)  src/*.cpp main.cpp  -o $(OUTPUT_DIR)/$(OUTPUT_FILE)

setup:
	mkdir -p build

run:
	./$(OUTPUT_DIR)/$(OUTPUT_FILE)

.PHONY: setup compile 

all: setup compile run
