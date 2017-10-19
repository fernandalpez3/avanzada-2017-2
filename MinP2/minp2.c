#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "minp2.h"

bool isValid(char* s) {
    int len = strlen(s);
    if( len%2 != 0 )
    {
        return false;
    }
    
    int limit = len / 2;
    char *stack = malloc(limit);
    int j = 0;
    char first, last;
    for(int i = 0; i < len; ++i)
    {
     first = s[i];
        if (first == '(' || first == '[' || first =='{')
        {
            if (j == limit)
            {
                return false;
            }
            else
            {
                stack [j++] = first;
            }
        }
        else
        {
            if (j == 0)
            {
                return false;
            }
            last = stack [j -1];
            if( (last == '(' && first == ')')
                || (last == '[' && first == ']')
                || (last == '{' && first == '}') )
            {
             j--;
            }
        }
    }
    return j == 0;
}

