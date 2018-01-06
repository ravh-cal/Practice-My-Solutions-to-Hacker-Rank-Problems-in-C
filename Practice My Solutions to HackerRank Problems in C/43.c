/*
https://www.hackerrank.com/challenges/insertionsort1/problem
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void print_ar(int *ar, int n) {
    for(int j=0;j<n;j++) printf("%d ",ar[j]);
    printf("\n");
    return;
}
void insertionSort(int n, int *ar)
{
    int val = ar[n-1];
    int done = 0;
    for(int i=n-1;i>=0;i--) {
        if(i == 0 || ar[i-1] < val) {
            ar[i] = val;
            done = 1;
        } else {
            ar[i] = ar[i-1];
        }
        print_ar(ar, n);
        if(done) break;
    }
}
int main(void) {
    int ar_size;
    int temp;
    scanf("%d", &ar_size);
    int ar[ar_size], ar_i;
    for(ar_i = 0; ar_i < ar_size; ar_i++) { 
        scanf("%d", &ar[ar_i]);
    }

    insertionSort(ar_size, ar);
    return 0;
}
