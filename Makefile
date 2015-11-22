
project: project.c
	gcc project.c -o project `pkg-config gtk+-2.0 --cflags --libs `
