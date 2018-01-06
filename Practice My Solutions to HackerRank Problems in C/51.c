/*
https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/problem
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int rand_partition(int *ar, int start, int end)
{
    int k_ind = start + (rand() % (end-start+1));
    int key = ar[k_ind];
    int i = start-1;
    swap(&ar[k_ind], &ar[end]);
    for(int j=start;j<=end-1;j++) {
        if(ar[j] <= key) {
            i++;
            swap(&ar[i],&ar[j]);
        }
    }
    swap(&ar[i+1],&ar[end]);
    return i+1;
}
void quick_sort_pvt(int *ar, int start, int end)
{
    if(start<end) {
        int pivot_ind = rand_partition(ar, start, end);
        quick_sort_pvt(ar, start, pivot_ind-1);
        quick_sort_pvt(ar, pivot_ind+1, end);
    }
}
int minimumAbsoluteDifference(int n, int* ar) {
    // Complete this function
    quick_sort_pvt(ar,0,n-1);
    int min = INT_MAX;
    for(int i=1;i<n;i++) if(abs(ar[i] - ar[i-1]) < min) min = abs(ar[i] - ar[i-1]);
    return min;
}
int main() {
    int n; 
    scanf("%d", &n);
    int *arr = malloc(sizeof(int) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       scanf("%d",&arr[arr_i]);
    }
    int result = minimumAbsoluteDifference(n, arr);
    printf("%d\n", result);
    return 0;
}