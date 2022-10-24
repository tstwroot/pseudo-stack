OBJ 			= $(PWD)/obj
LIB 			= $(PWD)/lib
INCLUDES 		= $(PWD)/includes
SRC 			= $(PWD)/src
BIN				= $(PWD)/bin
CC				= gcc
FLAGS			= -g -c -Wall

all: helpers.o stack.o
	$(CC) -g $(SRC)/main.c $(OBJ)/helpers.o $(OBJ)/stack.o -o $(BIN)/main
	
helpers.o:
	$(CC) $(FLAGS) $(LIB)/helpers.c -I$(INCLUDES) -o $(OBJ)/helpers.o

stack.o:
	$(CC) $(FLAGS) $(LIB)/stack.c -I$(INCLUDES) -o $(OBJ)/stack.o
