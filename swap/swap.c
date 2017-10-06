#include <stdlib.h>
#include <stdio.h>
#include "swap.h"

void swap(void *a , void *b , int size){
    char *buffer;
    buffer = (char)malloc(sizeof(char)*size);
    memcpy(buffer,a,size);
    memcpy(b,buffer,size);
    free(buffer);
}