#include <stdio.h>
#include "minunit.h"
#include "kata_4.h"

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define RESET "\033[0m"

int testsRun = 0;

static char * testUnit() {
  int grid[4][4] = {{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};
	int gridRowSize = 4, gridColSize = 4, i;
	int **gridPointer;
	gridPointer = (int **) malloc(sizeof(int *) * gridRowSize);
	for (i = 0; i < rows; i++) {
		gridPointer[i] = (int *) malloc(sizeof(int) * gridColSize);
		gridPointer[i] = grid[i];
  }
  int expected = 16;
	int result = islandPerimeter(gridPointer, gridRowSize, gridColSize);
	mu_assert("Wrong Perimeter.", result == expected);
	return 0;

  muAssert("error, testUnit 1 != 1", 1 == 1);
  return 0;
}

static char * allTests() {
  muRunTest(testUnit);
  return 0;
}

int main(int argc, char **argv) {
  char *result = allTests();
  if (result != 0) {
    printf("-_-_-_-_-_-_-_,------,      o \n");
    printf("_-_-_-_-_-_-_-|   /\\_/\\ \n");
    printf("-_-_-_-_-_-_-~|__( X .X)  +     + \n");
    printf("_-_-_-_-_-_-_- \"\"  \"\" \n");
    printf(KRED "✗ %s \n" RESET, result);
  }
  else {
    printf("-_-_-_-_-_-_-_,------,      o \n");
    printf("_-_-_-_-_-_-_-|   /\\_/\\ \n");
    printf("-_-_-_-_-_-_-~|__( ^ .^)  +     + \n");
    printf("_-_-_-_-_-_-_-  \"\"  \"\" \n");
    printf(KGRN " ✓ ALL TESTS PASSED \n" RESET);
  }
  printf("Tests run: %d\n", testsRun);
  return result != 0;
}
