CC = gcc
LIB = -lclear_lib -ltime_lib
INC = -I../include  
LIBPATH = -L../lib
GTK = `pkg-config gtk+-2.0 --cflags --libs `
CFILE = project3Test.c extern_globalVar.c
TARGET = project3Test

$(TARGET): $(CFILE)
	$(CC) -o $(TARGET) $(CFILE) $(INC)$(LIBPATH) $(GTK) $(LIB)

clean:
	rm project3Test
