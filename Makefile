DIRS = lib player
.PHONY: all clean

all:
	@for d in $(DIRS); \
	do \
		$(MAKE) -C $$d; \
	done

clean:
	@for d in $(DIRS); \
	do \
		$(MAKE) -C $$d clean; \
	done

#CC = gcc
#.PHONY: clean

#project3Test: project3Test.c
#	gcc project3Test.c -o project3Test -L. -lmylib `pkg-config gtk+-2.0 --cflags --libs `
