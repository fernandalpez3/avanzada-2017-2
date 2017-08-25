#include <stdio.h>
#include "length-word.H"



int main(){
    char string[]= "Hello World  ";
    int result = lengthOfLastWord(string);
    printf("number of letters of last word = %d.\n", result);
  
}