all: struct.o
	gcc struct.o
	./a.out
	rm *.o *~
struct.o:
	gcc -c struct.c
