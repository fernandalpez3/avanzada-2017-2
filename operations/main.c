#include <stdlib.h>
#include <stdio.h>
#define MAX_LENGTH 10
#define DEBUG 1
#define printDebug(msg) do {if (!(test)) return message; } while (0)
#include "operations.h"

/* Add function signatures here */

int main(int argc, char **argv) {
  /* Start your code here */
  char *operationName;
  char message[200];
  int operator1, operator2;
  int(*operation)(int, int); //apuntador que apunta a dos enteros que devuelve uno solo
  operationName = malloc(sizeof(char)*MAX_LENGTH);
  printf("Cual es la operacion\n");
  scanf("%s",operationName);
  scanf("%d",&operator1);
  scanf("%d",&operator2);
  printDebug(message);
 if(DEBUG) printf("operationName =%s \n",operationName);
  printf("operator1 = %d \n", operator1);
  printf("operator2 = %d \n", operator2);
  printf("9\n");

  return 0;
}
