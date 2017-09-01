#include <stdio.h>
#include <string.h>
#include "minunit.h"
#include "dict.h"

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

static char * testUpsertDictionary(){
  unsigned int size = 1;
  int errorCode;
  Dict *myDictionary = initDictionary(size, &errorCode);
  int value = 1;

  upsertDictionary(myDictionary,"uno",(void *)&value, &errorCode); //& se usa para sacar la direccion de una variable, el * para apuntadores y para acceder a la direccion de memoria donde esta el apuntador 
  
  muAssert("my dictionary errorCode must be 0", errorCode == 0);
  muAssert("my dictionary errorCode must be 0", strcmp(myDictionary->elements[0].key,"uno")== 0);
  muAssert("my dictionary errorCode must be 0", *((int *)myDictionary->elements[0].value)== value);

  return 0;

}

static char * testInitDictionary() {
  unsigned int size = 4;
  int errorCode;
  Dict *myDictionary = initDictionary(size, &errorCode);



  muAssert("my dictionary must be 4", myDictionary->size == 4);
  muAssert("my dictionary errorCode must be 0", errorCode == 0);

  return 0;
}

static char * allTests() {
  muRunTest(testInitDictionary);
  muRunTest(testUpsertDictionary);
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