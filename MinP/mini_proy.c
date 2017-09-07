#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mini_proy.h"

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