all: reference.c
	gcc -o prgrm reference.c

run: prgrm
	./prgrm
