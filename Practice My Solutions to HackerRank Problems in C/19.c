/*
https://www.hackerrank.com/challenges/day-of-the-programmer/problem
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char * solve(int year){
    // Complete this function
    int day = 13;
    if(!(year%4) && (year < 1918 || year%100 || !(year%400))) day--;
    if(year == 1918) day = 26;
    char *result = malloc(20*sizeof(char));
    snprintf(result,20,"%d.%s.%d",day,"09",year);
    return result;
}

int main() {
    int year; 
    scanf("%d", &year);
    int result_size;
    char* result = solve(year);
    printf("%s\n", result);
    return 0;
}
