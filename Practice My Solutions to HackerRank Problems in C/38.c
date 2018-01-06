/*
https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
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
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    int i = 0;
    int rem = n;
    int steps = 0;
    while(rem && i+2<=n) {
        if(!c[i+2]) {
            i+=2;
            rem-=2;
        } else {
            i++;
            rem--;
        }
        steps++;
    }
    printf("%d \n",steps);
    return 0;
}
