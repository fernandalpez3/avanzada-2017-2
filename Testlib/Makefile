all:
	 gcc -c test_lib.c
	 gcc -c main.c
	 gcc -o main test_lib.o main.o

test_test_lib: clean
	 gcc -c test_lib.c
	 gcc -c test_test_lib.c
	 gcc -o test_test_lib.exe test_lib.o test_test_lib.o
	 ./test_test_lib.exe

test:	 test_test_lib

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c test_lib.c
	 gcc -c main.c
	 gcc -o main.exe test_lib.o main.o
	 ./main
