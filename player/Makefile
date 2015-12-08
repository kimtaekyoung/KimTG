LIB = -lclear_lib
INC = -I../include/  
LIBPATH = -L../lib/

project3Test: project3Test.c extern_globalVar.c
	gcc -o project3Test project3Test.c extern_globalVar.c $(INC) $(LIBPATH) $(LIB) `pkg-config gtk+-2.0 --cflags --libs `

clean:
	rm project3Test
