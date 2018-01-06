/*
https://www.hackerrank.com/challenges/time-conversion/problem
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* timeConversion(char* s, int len) {
    // Complete this function
    int h2 = (char) s[1] - 48;
    int mil_hour = 0;
    int pm = 0;
    char* result = (char *)malloc(len+1 * sizeof(char));
    if(s[len-2] == 'P') pm = 1;
    if(s[0] == '0') {
        mil_hour = (pm == 1 ? (12 + h2) : h2);
    } else {
        mil_hour = (pm == 1 ? (22 + h2) : 10 + h2);
    }  
    if(s[0] == '1' && s[1] == '2') {
        if(pm) {
            mil_hour = 12;
        } else {
            result[0] = '0';
            result[1] = '0';
            mil_hour = 0;
        }
    }
    if(mil_hour) {
        result[0] = (char) ((mil_hour/10) + 48);
        result[1] = (char) ((mil_hour%10) + 48);
    }
    strncpy(&result[2], &s[2], 6);
    return result;
}

int main() {
    char *s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int inp_size = strlen(s);
    int result_size = 0;
    char* result = timeConversion(s, inp_size);
    printf("%s\n", result);
    return 0;
}