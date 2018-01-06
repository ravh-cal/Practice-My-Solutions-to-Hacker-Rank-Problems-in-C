/*
https://www.hackerrank.com/challenges/sherlock-and-squares/problem
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    long int a,b;
    scanf("%d",&t);
    for(int i=0;i<t;i++) {
        scanf("%ld %ld",&a,&b);
        printf("%ld \n",(long int)(floor(sqrtl(b)) - ceil(sqrtl(a)) + 1));
    }
    return 0;
}