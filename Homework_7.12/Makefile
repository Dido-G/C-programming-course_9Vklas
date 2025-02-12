mystrings.o: mystrings.c mystrings.h
	gcc -c mystrings.c

strlength.out: mystrings.o strlength.c
	gcc -o strlength.out mystrings.o strlength.c

strconcat.out: mystrings.o strconcat.c
	gcc -o strconcat.out mystrings.o strconcat.c

strcompare.out: mystrings.o strcompare.c
	gcc -o strcompare.out mystrings.o strcompare.c

all: strlength.out strconcat.out strcompare.out

clean:
	rm -f *.out *.o
