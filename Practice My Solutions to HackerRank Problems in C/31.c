/*
https://www.hackerrank.com/challenges/extra-long-factorials/problem
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#define max 200

void print(int *res)
{
    int start = 0;
    for(int i=0;i<=max-1;i++) {
        if(res[i] != 0) {
            start = 1;
        }
        if(start) printf("%d",res[i]);
    }
}

void big_fact(int *ar, int n)
{
    int i;
    for(i=0;i<max;i++) {
        if(ar[i]!=0) break;
    }
    int ar_len = max - i;
    int dig_in_n = 0;
    int dig = n;
    while(dig>0) {
        dig=dig/10; dig_in_n++;
    }
    int row = ar_len;
    int col = ar_len + dig_in_n;
    int res [row][col];
    memset(res,0,sizeof(res));
    int k = max-1;
    
    //create a 2D array with results of n * bit-by-bit of previous result in array ar.
    for(int i=0;i<row;i++) {
        int j = col - i - 1;
        int mul = n * ar[k--];
        while(mul > 0) {
              res[i][j] = mul%10;
              mul = mul/10;
              j--;
        }
    }
    
    //copy the mul result (which is adding of individual rows) into the 
    //passed original array itself to recycle the memory
    memset(ar,0,sizeof(*ar));
    k = max-1;
    int carry = 0;
    for(int j=col-1;j>=0;j--) {
        int sum = carry;
        //corner case
        if(j==-1 && carry) {
            ar[k]=carry;
            break;
        }
        for(int i=0;i<=row-1;i++) {
            sum += res[i][j];
        }
        ar[k] = sum % 10;
        k--;
        if(sum > 9) {
            carry = sum / 10;
        } else {
            carry = 0;
        }
    }
}
void fact(int n)
{
    int *res = malloc(max * sizeof(int));
    memset(res,0,sizeof(res));
    res[max-1] = 1;
    for(int i=n;i>1;i--) big_fact(res,i);
    print(res);
}
int main(){
    int n; 
    scanf("%d",&n);
    fact(n);
    return 0;
}