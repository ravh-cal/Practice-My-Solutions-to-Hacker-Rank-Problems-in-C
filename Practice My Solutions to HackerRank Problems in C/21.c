/*
https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int *h = malloc(sizeof(int) * 26);
    for(int h_i = 0; h_i < 26; h_i++){
       scanf("%d",&h[h_i]);
    }
    char* word = (char *)malloc(10 * sizeof(char));
    scanf("%s",word);
    int len = strlen(word);
    int max_val = 0;
    for(int i=0;i<len;i++) {
        int ind = (int) word[i] - (int)'a';
        if(h[ind] > max_val) max_val = h[ind];
    }
    printf("%d",max_val*len);
    return 0;
}
