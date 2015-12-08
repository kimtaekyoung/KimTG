LIB = -lclear_lib -ltime_lib
INC = -I../include  
LIBPATH = -L../lib

project3Test: project3Test.c extern_globalVar.c
	gcc -o project3Test project3Test.c extern_globalVar.c $(INC)$(LIBPATH) `pkg-config gtk+-2.0 --cflags --libs ` $(LIB)

clean:
	rm project3Test
