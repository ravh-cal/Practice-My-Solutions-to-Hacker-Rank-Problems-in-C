/*
https://www.hackerrank.com/challenges/bon-appetit/problem
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void bonAppetit(int n, int k, int b, int ar_size, int* ar) {
    // Complete this function
    int sum = 0;
    for(int i=0;i<n;i++) sum += ar[i];
    if((b - (sum - ar[k])/2) == 0) printf("Bon Appetit"); 
    else printf("%d",(b - (sum - ar[k])/2));
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int b; 
    scanf("%i", &b);
    bonAppetit(n, k, b, n, ar);
    return 0;
}
