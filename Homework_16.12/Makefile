all: quadraticroots

quadraticroots: quadraticroots.o main.o
	gcc quadraticroots.o main.o -o quadraticroots -lm

quadraticroots.o: quadraticroots.c quadraticroots.h
	gcc -c quadraticroots.c

main.o: main.c quadraticroots.h
	gcc -c main.c

clean:
	rm -f quadraticroots quadraticroots.o main.o