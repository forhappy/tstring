all:tst-string

CFLAGS=-g -O2

tst-string:tst-tstring.o tstring.o
	gcc -o $@ $^

tst-tstring.o:tst-tstring.c

tstring.o:tstring.c

.PHONY:clean

clean:
	rm *.o tst-string
