libclear_lib.a: clickclear.o cardClear.o
	ar rc libclear_lib.a clickclear.o cardClear.o

clickclear.o: clickclear.c
	gcc -c clickclear.c -I../include/

cardClear.o: cardClear.c
	gcc -c cardClear.c -I../include/ `pkg-config gtk+-2.0 --cflags --libs `

clean: 
	rm *.o *.a
