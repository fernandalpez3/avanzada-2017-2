#include <stdlib.h>
#include "length-word.h"



int lengthOfLastWord(const char* string)
{                   
    int result = 0;
    while (*string != '\0') {
        if (*string != ' ') {
            result++;
        } else {
            result = 0;
        }
        string++;
    }

    return result;
   
}


   
 


    
    


