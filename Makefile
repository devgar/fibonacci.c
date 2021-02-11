



run: a.out
	./a.out
a.out: main.c
	gcc main.c
build: a.out
