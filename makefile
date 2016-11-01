compile: 1.c 2.c 3.c 4.c 5.c
	gcc -o 1 1.c
	gcc -o 2 2.c
	gcc -o 3 3.c
	gcc -o 4 4.c
	gcc -o 5 5.c

run:
	./1
	./2
	./3
	./4
	./5

clean:
	rm 1
	rm 2
	rm 3
	rm 4
	rm 5
	rm *~
