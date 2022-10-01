all:
	@gcc -g -c stack.c helpers.c
	@gcc -g main.c stack.o helpers.o
	@rm *.o
