/*
https://www.hackerrank.com/challenges/birthday-cake-candles/problem
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int birthdayCakeCandles(int n, int ar_size, int* ar) {
    // Complete this function
    int max_h = ar[0];
    int count = 1;
    for(int i=1; i<n; i++) {
        if(ar[i] == max_h) count++;
        if(ar[i] > max_h) {
            max_h = ar[i];
            count = 1;
        }
    }
    return count;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = birthdayCakeCandles(n, n, ar);
    printf("%d\n", result);
    return 0;
}
