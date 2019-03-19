CC=gcc
CCFLAGS=-std=c99 -g -lm

polygon: main.o
	$(CC) $(CCFLAGS) $^ -L/usr/share/p2t/lab05/Exe2/ -lturtle -o $@

square: main.o
	$(CC) $(CCFLAGS) $^ -L/usr/share/p2t/lab05/Exe2/ -lturtle -o $@

main.o: main.c
	$(CC) $(CCFLAGS) -c $^

.PHONY: clean
clean:
	rm *.o

