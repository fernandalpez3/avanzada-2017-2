#include <stdlib.h>
#include <stdio.h>
#include "pcre.h"
#include "include/pcre2.h"

/* Add function signatures here */

int main(int argc, char **argv) {
  /* Start your code here */
  PCRE_SPTR pattern;
  pcre2_code *re;
  int crlf_is_newline;
  int errornumber;
  int erroroffset;

  char *strPattern = strdup ("Mari[ao]");
  char *String = argv[1];
  
  pattern = strPattern;

  re = pcre2_compile(
    pattern,
    PCRE2_ZERO_TERMINATED,
    0,
    &errornumber,
    &erroroffset,
    NULL);


  )
  printf("Hello from main\n");
  return 0;
}
