/*
https://www.hackerrank.com/challenges/reduced-string/problem
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void super_reduced_string(char* s){
    // Complete this function
    int len = strlen(s) + 1;
    char *stack = (char *) malloc(len * sizeof(char));
    int top = 0;
    stack[top] = s[0];
    for(int i=1;i<len;i++) {
        if(s[i] == stack[top]) {
            stack[top] = '\0';
            top--;
            continue;
        }
        ++top;
        stack[top] = s[i];
    }
    if(stack[0] == '\0') {
        printf("Empty String");
    } else {
        for(int i=0;i<top;i++) {
            printf("%c",stack[i]);
        }
    }
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    super_reduced_string(s);
    return 0;
}
