/*
https://www.hackerrank.com/challenges/equality-in-a-array/problem
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>


void count_sort(int * ar, int size)
{
    int max_val = 0;
    int temp_arr[size];
    for(int i =0;i<size;i++) if(ar[i] > max_val) max_val = ar[i];
    int count_ar[max_val+1];
    memset(count_ar,0,sizeof(count_ar));
 
    for(int i=0;i<size;i++) count_ar[ar[i]]++;
    
    for(int i=1;i<=max_val;i++) count_ar[i] += count_ar[i-1];
    
    for(int i=size-1;i>=0;i--) {
        temp_arr[count_ar[ar[i]]-1] = ar[i];
        --count_ar[ar[i]];
    }
    for(int i=0;i<size;i++) ar[i] = temp_arr[i];
}
void equalize(int *ar, int n)
{
    count_sort(ar,n);
    int max = 1;
    int start = 1;
    for(int i=0;i<n;i++) {
        if(ar[i+1] == ar[i]) {
            start++;
        } else {
            if(max <= start) max = start;
            start = 1;
        }
   }
   int min_del_op = n - max;
   printf("%d",min_del_op);
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++) scanf("%d",&ar[i]);
    equalize(ar,n);
    return 0;
}
