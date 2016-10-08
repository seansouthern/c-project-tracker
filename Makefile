CC=gcc
CORESRC=./src/core
EXDIR=./bin
CLISRC=./src/cli
LIBDIR=./lib
TESTSRC=./src/test

all: testgen testrun core

clean:
	-rm $(EXDIR)/*
	-rm $(TESTSRC)/framework/scanned_tests.h

core:
	$(CC) -o $(EXDIR)/core $(CORESRC)/main.c -I$(CORESRC)
	$(CC) -o $(EXDIR)/cli  $(CLISRC)/cli.c -lncurses -lpanel -I$(CLISRC)


testgen:
	$(CC) -o $(EXDIR)/generate_includes $(TESTSRC)/framework/test_scan.c

testrun:
	$(CC) -o $(EXDIR)/run_tests $(TESTSRC)/framework/driver.c -I$(TESTSRC)/framework/
