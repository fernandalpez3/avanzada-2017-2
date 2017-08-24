
all:
	 gcc -c length-word.c
	 gcc -c length-word-main.c
	 gcc -o main length-word.o length-word-main.o

test_length-word: clean
	 gcc -c length-word.c
	 gcc -c test_length-word.c
	 gcc -o test_length-word.exe length-word.o test_length-word.o
	 ./test_two-sum.exe

test:	 test_length-word

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c length-word.c
	 gcc -c lenght-word-main.c
	 gcc -o length-word-main.exe length-word.o length-word-main.o
	 ./length-word-main
