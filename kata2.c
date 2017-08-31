#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int canConstruct(char* ransomNote, char* magazine) {
    int arr[128]={0x00};
    char *m = magazine;
    char *r =ransomNote;
 //  printf("random %s\n", ransomNote);
 //  printf("magazine %s\n", magazine);
    while(*m)
    {
        arr[*m]++;
        m++;
       
    }
    while(*r)
    {
        if(!arr[*r])
        {
             return 0;
        }
        arr[*r]--;
        r++;
    }
     return 1;
     //printf("%i",result);