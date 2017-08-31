all:
	 gcc -c kata2.c
	 gcc -c main.c
	 gcc -o main kata2.o main.o

test_kata2: clean
	 gcc -c kata2.c
	 gcc -c test_kata2.c
	 gcc -o test_kata2.exe kata2.o test_kata2.o
	 ./test_kata2.exe

test:	 test_kata2

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c kata2.c
	 gcc -c main.c
	 gcc -o main.exe kata2.o main.o
	 ./main
