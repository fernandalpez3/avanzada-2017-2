LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c minp2.c
	 gcc -c main.c
	 gcc -o minp2.exe minp2.o main.o $(LIB)

test_minp2: clean
	 gcc -c minp2.c
	 gcc -c test_minp2.c
	 gcc -o test_minp2.exe minp2.o test_minp2.o
	 ./test_minp2.exe

test:	 test_minp2

clean:
	 rm *.out *.o *.exe || exit 0

minp2: clean
	 gcc -c minp2.c
	 gcc -c main.c
	 gcc -o minp2.exe minp2.o main.o $(LIB)

run: minp2
	 ./minp2.exe

runtest: minp2
	 ./integrationtest.tcl ./minp2.exe

