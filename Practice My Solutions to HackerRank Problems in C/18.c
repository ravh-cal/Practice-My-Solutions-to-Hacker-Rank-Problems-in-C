/*
https://www.hackerrank.com/challenges/migratory-birds/problem
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int migratoryBirds(int n, int* ar) {
    // Complete this function
    int hash[5] = {0};
    for(int i=0;i<n;i++) hash[ar[i]]++;
    int max_val = hash[0];
    for(int i=1;i<5;i++) if(hash[i] > max_val) max_val = hash[i];
    return ar[max_val];
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = migratoryBirds(n, ar);
    printf("%d\n", result);
    return 0;
}
