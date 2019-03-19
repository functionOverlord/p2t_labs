# compiler and program name declaration
CC=gcc
EXE=myprog

# compiler flags
CFLAGS=-Wall
OPTCFLAGS=-O2
DEBUGFLAGS=-g
STDFLAGS=-std=c99

OBJS=main.o printpgm.o

opt: CFLAGS+=$(OPTCFLAGS)
opt: $(EXE)

debug: CFLAGS+=$(DEBUGCFLAGS)
debug: $(EXE)

std: CFLAGS+=$(STDFLAGS)
std: $(EXE)

# compile final executable
$(EXE): $(OBJS)
	$(CC) -o $@ $^

#build object files
main.o: main.c
	$(CC) $(CFLAGS) -c $<

printpgm.o: printpgm.c
	$(CC) $(CFLAGS) -c $<

.PHONY: clean
clean:
	rm *.o
