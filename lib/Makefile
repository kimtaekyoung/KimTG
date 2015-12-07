libmy_lib.a: clickclear.o
	ar rc libmy_lib.a clickclear.o

clickclear.o: clickclear.c
	gcc -c clickclear.c -I../include/

clean: 
	rm *.o *.a
