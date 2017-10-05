#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "kata3.h"

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */

int contains(char* row , int lenght , char c){
    for (int i = 0; i < lenght ; i ++){
       int a = row[i];
        if(a == c || a == c +32){
            return 1;
        }
    }
    return 0;
}

char** findWords(char** words, int wordsSize, int* returnSize ) {
    char a[10]={'q','w','e','r','t','y','u','i','o','p'};
    char b[9]={'a','s','d','f','g','h','j','k','l'};
    char c[7]={'z','x','c','v','b','n','m'};

    //char **a = "q w e r t y u i o p ";
    //char **b = "a s d f g h j k l";
    //char **c = "z x c v b n m";
    char  **validWords = (char**)malloc(sizeof(char *) * wordsSize);
    int size = 0;

    for (int i = 0; i < wordsSize ; i++){
        char *word = words[i];
        int j = 0;
        int row = 0;
        int isInRow = 1;
        while (word[j] != '\0') {
            if (row == 0) {
                if (contains(a, 10, word[j])) {
                    row = 1;
                    continue;
                }
                if (contains(b, 9, word[j])) {
                    row = 2;
                    continue;
                }
                if (contains(c, 7, word[j])) {
                    row = 3;
                    continue;
                }
            } else {
                if ((contains(a, 10, word[j]) && row != 1) || (contains(b, 9, word[j]) && row != 2) || (contains(c, 7, word[j]) && row != 3)) {
                    isInRow = 0;
                    break;
                }
            }
            j++;
        }
        if (isInRow) {
            validWords[size] = word;
            size++;
        }
    }
    *returnSize = size;
    return validWords;
    
}