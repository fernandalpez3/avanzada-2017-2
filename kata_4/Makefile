LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c kata_4.c
	 gcc -c main.c
	 gcc -o kata_4.exe kata_4.o main.o $(LIB)

test_kata_4: clean
	 gcc -c kata_4.c
	 gcc -c test_kata_4.c
	 gcc -o test_kata_4.exe kata_4.o test_kata_4.o
	 ./test_kata_4.exe

test:	 test_kata_4

clean:
	 rm *.out *.o *.exe || exit 0

kata_4: clean
	 gcc -c kata_4.c
	 gcc -c main.c
	 gcc -o kata_4.exe kata_4.o main.o $(LIB)

run: kata_4
	 ./kata_4.exe

runtest: kata_4
	 ./integrationtest.tcl ./kata_4.exe

