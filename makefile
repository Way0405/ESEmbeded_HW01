
all:main.c
	g++ main.c -o main.o -o main.elf
clean:
	rm -f main.o main.elf
