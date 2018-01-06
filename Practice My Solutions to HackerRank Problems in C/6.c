/*
https://www.hackerrank.com/challenges/plus-minus/problem

*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    int pos_count = 0;
    int neg_count = 0;
    int zero_count = 0;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
        if(arr[arr_i] == 0) {
            zero_count++;
        } else if(arr[arr_i] < 0) {
            neg_count++;
        } else {
            pos_count++;
        }
    }
    printf("%4f\n%4f\n%4f", (float) pos_count/n, (float) neg_count/n, (float) zero_count/n);
    
    return 0;
}
