/*
https://www.hackerrank.com/challenges/quicksort1/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void swap(int *a, int *b) {
    int t = *a;
    *a=*b;
    *b = t;
}
void partition(int n, int *  ar) 
{
    int k_ind = 0;
    int key = ar[k_ind];
    int i = -1;
    swap(&ar[k_ind], &ar[n-1]);
    for(int j=0;j<=n-1;j++) {
        if(ar[j] <= key) {
            i++;
            swap(&ar[i],&ar[j]);
        }
    }
    swap(&ar[i+1],&ar[n-1]);
    for(i=0;i<n;i++) printf("%d ",ar[i]);
}

int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

partition(_ar_size, _ar);
   
   return 0;
}
