all: timer.o exercices.o main.o
	gcc -O3 -std=c99 -Wall -o openmp timer.o exercices.o main.o -lm -fopenmp
	
timer.o: timer.c
	gcc -O3 -std=c99 -Wall -o timer.o -c timer.c
	
exercices.o: exercices.c timer.h
	gcc -O3 -std=c99 -Wall -o exercices.o -c exercices.c -fopenmp
	
main.o: main.c exercices.h 
	gcc -O3 -std=c99 -Wall -o main.o -c main.c

clean:
	rm -rf *.o
	