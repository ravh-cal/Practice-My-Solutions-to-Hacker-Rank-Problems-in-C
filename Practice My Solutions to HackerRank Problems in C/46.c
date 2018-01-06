/*
https://www.hackerrank.com/challenges/runningtime/problem
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void insertionSort(int n, int *ar) {
    int count=0;
    for(int i=1;i<n;i++) {
        int temp = ar[i];
        for(int j=i;j>0;j--) {
            if(ar[j] < ar[j-1]) {
                ar[j] = ar[j-1];
                ar[j-1] = temp;
                count++;
            }
        }
    }
    printf("%d",count);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int ar_size;
    int temp;
    scanf("%d", &ar_size);
    int ar[ar_size], ar_i;
    for(ar_i = 0; ar_i < ar_size; ar_i++) { 
        scanf("%d", &ar[ar_i]);
    }

    insertionSort(ar_size, ar);
    
    return 0;
}
