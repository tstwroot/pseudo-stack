OBJS	= main.o stack.o helpers.o
SOURCE	= main.c stack.c helpers.c
HEADER	= stack.h helpers.h
OUT	= a.out
CC	 = gcc
FLAGS	 = -g -c -Wall

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.c
	$(CC) $(FLAGS) main.c 

stack.o: stack.c
	$(CC) $(FLAGS) stack.c 

helpers.o: helpers.c
	$(CC) $(FLAGS) helpers.c 

clean:
	rm -f $(OBJS) $(OUT)
