#/***           Makefile                ***/


main: main.o pattern.o
	gcc main.o pattern.o  -o main


main.o: main.c pattern.c pattern.h
	gcc -c  main.c pattern.c


clear:
	rm *.o
	