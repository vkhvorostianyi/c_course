main: main.o loops.o
	clang -o main main.o loops.o
main.o: main.c loops.h
	clang -c -g main.c
loops.o: loops.c loops.h
	clang -c -g loops.c 
