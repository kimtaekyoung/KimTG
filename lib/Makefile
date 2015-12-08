INC = -I../include/
GTK = `pkg-config gtk+-2.0 --cflags --libs `
GTKCFILE = cardClear.c doneLabel.c timerHandler.c
GTKOBJ = cardClear.o doneLabel.o timerHandler.o
TARGET = libclear_lib.a libtime_lib.a

all : $(TARGET)

libclear_lib.a: clickclear.o 
	ar rc libclear_lib.a clickclear.o

libtime_lib.a: doneLabel.o timerHandler.o cardClear.o
	ar rc libtime_lib.a doneLabel.o timerHandler.o cardClear.o

clickclear.o: clickclear.c
	gcc -c clickclear.c $(INC)

$(GTKOBJ): $(GTKCFILE) 
	gcc -c $(GTKCFILE) $(INC) $(GTK)

clean: 
	rm *.o *.a
