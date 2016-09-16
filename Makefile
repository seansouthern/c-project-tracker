CC=gcc
CORESRC=./src/core
ODIR=./src
EXDIR=./bin
CLISRC=./src/cli
LIBDIR=./lib
BINDIR=./bin

all: tests core 

clean:
	-rm $(BINDIR)/*

core:
	$(CC) -o $(EXDIR)/core $(CORESRC)/main.c -I$(CORESRC)
	$(CC) -o $(EXDIR)/cli  $(CLISRC)/cli.c -lncurses -lpanel -I$(CLISRC)


tests:




