CC = gcc
INC = -I../include/
GTK = `pkg-config gtk+-2.0 --cflags --libs `
CFILE = clickclear.c
GTKCFILE = cardClear.c doneLabel.c timerHandler.c cardset.c space.c
GTKOBJ = cardClear.o doneLabel.o timerHandler.o cardset.o space.o
CLEARLIB = clickclear.o cardset.o space.o
TIMELIB = doneLabel.o timerHandler.o cardClear.o
TARGET = libclear_lib.a libtime_lib.a

all : $(TARGET)

libclear_lib.a: $(CLEARLIB)
	ar rc libclear_lib.a $(CLEARLIB)

libtime_lib.a: $(TIMELIB)
	ar rc libtime_lib.a $(TIMELIB)

clickclear.o: $(CFILE)
	$(CC) -c $(CFILE) $(INC)

$(GTKOBJ): $(GTKCFILE) 
	$(CC) -c $(GTKCFILE) $(INC) $(GTK)

clean: 
	rm *.o *.a

