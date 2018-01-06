/*
https://www.hackerrank.com/challenges/apple-and-orange/problem
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* appleAndOrange(int s, int t, int a, int b, int apple_size, int* apple, int orange_size, int* orange, int *result_size) {
    // Complete this function
    int *result = malloc(2 * sizeof(int));
    for(int i=0;i<apple_size;i++) {
        if(a + apple[i] >= s && a + apple[i] <= t) result[0]++;
    }
    for(int i=0;i<orange_size;i++) {
        if(b + (orange[i]) >= s && (b + (orange[i]) <= t)) result[1]++;
    }
    *result_size = 2;
    return result;
}

int main() {
    int s; 
    int t; 
    scanf("%i %i", &s, &t);
    int a; 
    int b; 
    scanf("%i %i", &a, &b);
    int m; 
    int n; 
    scanf("%i %i", &m, &n);
    int *apple = malloc(sizeof(int) * m);
    for (int apple_i = 0; apple_i < m; apple_i++) {
       scanf("%i",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    for (int orange_i = 0; orange_i < n; orange_i++) {
       scanf("%i",&orange[orange_i]);
    }
    int result_size;
    int* result = appleAndOrange(s, t, a, b, m, apple, n, orange, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");


    return 0;
}
