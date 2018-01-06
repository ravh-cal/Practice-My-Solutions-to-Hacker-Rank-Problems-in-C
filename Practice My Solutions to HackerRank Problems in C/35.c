/*
https://www.hackerrank.com/challenges/cut-the-sticks/problem
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void cut(int *ar, int size, int val)
{
    for(int i=0;i<size;i++) if(ar[i]) ar[i] = ar[i] - val;
}
int count_rem_sticks(int *ar, int size)
{
    int count = 0;
    for(int i=0;i<size;i++) if(ar[i] != 0) count++;
    return count;
}
int find_min(int *ar, int size)
{
    int min = INT_MAX;
    for(int i=0;i<size;i++) if(ar[i] && ar[i] < min) min = ar[i];
    return min;
}
void cut_sticks(int *ar, int size)
{
    int count = size;
    while(count >= 1) {
        printf("%d \n",count);
        if(count == 1) break;
        int min = find_min(ar, size);
        cut(ar,size,min);
        count = count_rem_sticks(ar, size);
    }
}
int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    cut_sticks(arr, n);
    return 0;
}
