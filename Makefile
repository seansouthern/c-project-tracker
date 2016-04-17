CC=gcc
CORESRC=./src/core
ODIR=./src
EXDIR=./bin
CLISRC=./src/cli
LIBDIR=./lib


all: tests core 

clean:
	-rm $(SRCDIR)/*.o
	-rm $(EXDIR)/*.exe
	-rm $(CLISRC)/*.o

core:
	$(CC) -o $(EXDIR)/core $(CORESRC)/main.c -I$(CORESRC)
	$(CC) -o $(EXDIR)/cli  $(CLISRC)/cli.c -lncurses -lpanel -I$(CLISRC)


tests:




