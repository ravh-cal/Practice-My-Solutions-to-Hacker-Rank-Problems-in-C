/*
https://www.hackerrank.com/challenges/mini-max-sum/problem
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long int find_sum(int index_to_exclude, int a[], int size)
{
    long long int sum = 0;
    for(int i = 0;i<size;i++) {
        if(!(index_to_exclude == i)) sum += a[i];
    }
    return sum;
}
int main() {
    long long int min_sum = LLONG_MAX; 
    long long int max_sum = LLONG_MIN;
    int *arr = malloc(sizeof(int) * 5);
    int n = 5; /*array size - to make the find_sum a generic function */
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int arr_i = 0; arr_i < n; arr_i++) {
        long long int sum = find_sum(arr_i, arr, n);
        if(sum < min_sum) min_sum = sum;
        if(sum > max_sum) max_sum = sum;
    }
    printf("%lld %lld", min_sum, max_sum);
    return 0;
}
