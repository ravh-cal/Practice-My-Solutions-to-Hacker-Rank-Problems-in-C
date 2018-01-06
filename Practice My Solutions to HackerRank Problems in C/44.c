/*
https://www.hackerrank.com/challenges/insertionsort2/problem
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
   for(int i=1;i<n;i++) {
      int temp = ar[i];
      for(int j=i;j>0;j--) {
          if(ar[j] < ar[j-1]) {
             ar[j] = ar[j-1];
             ar[j-1] = temp;
          }
       }
       print_ar(ar,n);
    }
}

int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

insertionSort(_ar_size, _ar);
   
   return 0;
}
