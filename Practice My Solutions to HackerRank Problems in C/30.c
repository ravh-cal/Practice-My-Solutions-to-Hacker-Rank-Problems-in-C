/*
https://www.hackerrank.com/challenges/find-digits/problem
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void function(long int inp)
{
    int div,count = 0;
    long int temp = inp;
    while(temp > 0) {
        div = temp%10;
        if(div && (inp%div == 0)) count++;
        temp = temp/10;
    }
    printf("%d \n",count);
}

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long int n; 
        scanf("%ld",&n);
        function(n);
    }
    return 0;
}
