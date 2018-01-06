/*
https://www.hackerrank.com/challenges/correctness-invariant/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>


void insertionSort(int n, int ar[]) {
    for(int i=1;i<n;i++) {
        int temp = ar[i];
        for(int j=i;j>0;j--) {
            if(ar[j] < ar[j-1]) {
                ar[j] = ar[j-1];
                ar[j-1] = temp;
            }
        }
    }
    for(int j=0;j<n;j++)
    {
        printf("%d",ar[j]);
        printf(" ");
    }
}
int main(void) {

    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(N, arr);

    return 0;
}
