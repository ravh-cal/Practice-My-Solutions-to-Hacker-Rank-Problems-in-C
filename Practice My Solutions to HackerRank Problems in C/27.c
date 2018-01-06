/*
https://www.hackerrank.com/challenges/circular-array-rotation/problem
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void swap (long int *a, long int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void rotate_array(long int *ar, long int size, long int times)
{
    long int i,j;
    if(times == size) return;
    if(times > size) times = times%size;
    for(i = 0, j = size-times-1; i<j; i++,j--) swap(&ar[i],&ar[j]);
    for(i = size-times, j = size-1; i < j; i++,j--) swap(&ar[i],&ar[j]);
    for(i = 0, j = size-1; i<j; i++, j--) swap(&ar[i],&ar[j]);
}

int main(){
    long int n; 
    long int k; 
    int q; 
    scanf("%ld %ld %d",&n,&k,&q);
    long int *a = malloc(sizeof(long int) * n);
    for(long int a_i = 0; a_i < n; a_i++){
       scanf("%ld",&a[a_i]);
    }
    
    rotate_array(a, n, k);
    
    for(int a0 = 0; a0 < q; a0++){
        long int m; 
        scanf("%ld",&m);
        printf("%ld \n",a[m]);
    }
    return 0;
}
