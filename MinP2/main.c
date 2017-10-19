#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "minp2.h"

/* Add function signatures here */

int main(int argc, char **argv) {
  char *s = "()";
  bool res = isValid(s);
  if(res == 0){
      printf("\nParenthesis is not valid");
  }else{
      printf("\nParenthesis is valid");
  }
 // printf("%d", res); 
}
