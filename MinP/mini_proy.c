#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mini_proy.h"

/*************
* Given two strings, deliver the character that is not equal to the others.
* @param:
* sum1,2: amount of characters in the array
* i,j: character added in the string 
* @return:
* character that is different from the string
*/

char findTheDifference(char* s, char* t){
    //int arrS[128] = {0x00};
    //int arrT[128] = {0x00};
    int i = 0, j= 0;
    int sum1 = 0, sum2 = 0;
    char result;
    while(s[i]){
        sum1+= s[i];
        i++;
    }
    while(t[j]){
        sum2+= t[j];
        j++;
    }
   result = (char)(sum1-sum2);
   return result;
    
}