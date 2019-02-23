
all:main.c
	gcc main.c -o main.o
	gcc main.c -o main.elf
clean:
	rm -f main.o

