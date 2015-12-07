project3Test: project3Test.c extern_globalVar.c
	gcc -o project3Test project3Test.c extern_globalVar.c -I../include/ -L../lib/ -lmy_lib `pkg-config gtk+-2.0 --cflags --libs `

clean:
	rm project3Test
