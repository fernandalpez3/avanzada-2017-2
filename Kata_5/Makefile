LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c kata_5.c
	 gcc -c main.c
	 gcc -o kata_5.exe kata_5.o main.o $(LIB)

test_kata_5: clean
	 gcc -c kata_5.c
	 gcc -c test_kata_5.c
	 gcc -o test_kata_5.exe kata_5.o test_kata_5.o
	 ./test_kata_5.exe

test:	 test_kata_5

clean:
	 rm *.out *.o *.exe || exit 0

kata_5: clean
	 gcc -c kata_5.c
	 gcc -c main.c
	 gcc -o kata_5.exe kata_5.o main.o $(LIB)

run: kata_5
	 ./kata_5.exe

runtest: kata_5
	 ./integrationtest.tcl ./kata_5.exe

