/*
https://www.hackerrank.com/challenges/countingsort2/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void count_sort(int *ar, long int size)
{
    int max_val = 100;
    int temp_arr[size];
    int count_ar[100] = {0};
    long int i;
 
    for(i=0;i<size;i++) count_ar[ar[i]]++;
    
    for(i=1;i<max_val;i++) count_ar[i] += count_ar[i-1];
    
    for(i=size-1;i>=0;i--) {
        temp_arr[count_ar[ar[i]]-1] = ar[i];
        --count_ar[ar[i]];
    }
    for(i=0;i<size;i++) ar[i] = temp_arr[i];
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int size, i;
    scanf("%ld",&size);
    int ar[size];
    for(i=0;i<size;i++) scanf("%d",&ar[i]);
    count_sort(ar,size);
    for(i =0;i<size;i++) printf("%d ",ar[i]);
    return 0;
}
