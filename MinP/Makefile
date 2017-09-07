all:
	 gcc -c mini_proy.c
	 gcc -c main.c
	 gcc -o main mini_proy.o main.o

test_mini_proy: clean
	 gcc -c mini_proy.c
	 gcc -c test_mini_proy.c
	 gcc -o test_mini_proy.exe mini_proy.o test_mini_proy.o
	 ./test_mini_proy.exe

test:	 test_mini_proy

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c mini_proy.c
	 gcc -c main.c
	 gcc -o main.exe mini_proy.o main.o
	 ./main
