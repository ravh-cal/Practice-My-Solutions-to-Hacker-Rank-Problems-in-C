/*
https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int divisibleSumPairs(int n, int k, int ar_size, int* ar) {
    // Complete this function
    int count = 0;
    int hash[k];
    memset(hash,0,sizeof(hash));
    for(int i=0;i<n;i++) hash[ar[i]%k]++;
    count = ((hash[0]) * (hash[0]-1))/2;
    for(int i=1;i<=k/2 && i != k-i;i++) {
        count += hash[i] * hash[k-i];
    }
    if(k%2==0) count += ((hash[k/2]) * (hash[k/2]-1))/2;
    return count;
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = divisibleSumPairs(n, k, n, ar);
    printf("%d\n", result);
    return 0;
}
