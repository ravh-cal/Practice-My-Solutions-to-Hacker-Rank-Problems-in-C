/*
https://www.hackerrank.com/challenges/permutation-equation/problem
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int find(int *ar, int size, int elem)
{
    int found = 0;
    for(int i=0;i<size;i++) {
        if(ar[i] == elem) {
            found = i;
            break;
        }
    }
    return found+1;
}

void seq_equation(int *ar, int size)
{
    for(int i=1;i<=size;i++) {
        int i_in_ar = find(ar, size, i);
        int y = find(ar, size, i_in_ar);
        printf("%d \n",y);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    scanf("%d",&size);
    int ar[size];
    for(int i=0;i<size;i++) {
        scanf("%d",&ar[i]);
    }
    seq_equation(ar,size);
    return 0;
}
