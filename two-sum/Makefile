CC=gcc
CFLAGS=-I.
DEPS = two-sum.h
OBJ = two-sum.o two-sum-main.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)


two-sum: two-sum.c two-sum-main.c
     gcc -o hellomake hellomake.c hellofunc.c -I. 

clean:
	rm *.exe