/*
https://www.hackerrank.com/challenges/staircase/problem

*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);    
    for(int i = n-1; i>=0; i--) {
        if (i) printf("%*c",i,' ');
        int k = n-i;
        while (k--) printf("#");
        printf("\n");
    }
    return 0;
}
