a.out: main.o libass2_20CS30015.a
	cc main.o -L. -lass2_20CS30015

main.o: main.c myl.h
	cc -c main.c

libass2_20CS30015.a: ass2_20CS30015.o
	ar -rcs libass2_20CS30015.a ass2_20CS30015.o

ass2_20CS30015.o: ass2_20CS30015.c myl.h
	cc -c ass2_20CS30015.c

clean:
	rm a.out main.o libass2_20CS30015.a ass2_20CS30015.o 