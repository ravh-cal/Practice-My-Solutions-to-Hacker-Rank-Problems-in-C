/*
https://www.hackerrank.com/challenges/camelcase/problem
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int count = 1;
    char* s = (char *)malloc(100240 * sizeof(char));
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++) {
        char t = s[i];
        int asci_t = (int)t;
        if(t >= 97 && t <= 122) continue;
        else count++;
    }
    printf("%d",count);
    return 0;
}
