all: unity.c Lab1.c
	gcc -ggdb -fprofile-arcs -ftest-coverage unity.c Lab1.c

run: all
	./a.out

clean:
	rm -rf *.out *.gcno *.gcda *.gcov

coverage:
	gcov -a a-Lab1.c