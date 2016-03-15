CC=gcc
SRCDIR=./src
ODIR=./src
EXDIR=./bin

trackermake: $(SRCDIR)/*.*
	$(CC) -o $(EXDIR)/storytest $(SRCDIR)/main.c -I $(SRCDIR)

clean:
	-rm $(SRCDIR)/*.o
	-rm $(EXDIR)/*.exe
