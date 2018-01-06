/*
https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void jump_cloud(int *ar, int n, int k)
{
    int E = 100;
    int i = 0;
    int jumps = n/k;
    while(jumps--) {
        E--;
        i += k;
        if(ar[i] == 1) E = E - 2;
        }
    printf("%d",(ar[0] == 0) ? E:E-2);
}

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    jump_cloud(c,n,k);
    return 0;
}
