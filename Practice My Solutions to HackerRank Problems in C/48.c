/*
https://www.hackerrank.com/challenges/countingsort1/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int size, i;
    scanf("%ld",&size);
    int ar[size];
    int c_ar[100] = {0};
    for(i =0;i<size;i++) {
        scanf("%d",&ar[i]);
        c_ar[ar[i]]++;
    }
    for(i=0;i<100;i++) printf("%d ",c_ar[i]);
    return 0;
}
