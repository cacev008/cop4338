all: hw1

hw1: CarlosAcevedoHW1.o sizeof.o
	gcc CarlosAcevedoHW1.o sizeof.o -o hw1

hw1.o: hw1.c
	gcc -c hw1.c -o hw1.o

sizeof.o: sizeof.c
	gcc -c mystdio.c -o mystdio.o

clean:
	rm -f hw1.o sizeof.o hw1 core *~
