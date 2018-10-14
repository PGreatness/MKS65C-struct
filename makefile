compile: struct.o
	gcc struct.o
run: 
	./a.out
	rm *.o
struct.o:
	gcc -c struct.c
