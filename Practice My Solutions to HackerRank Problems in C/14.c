/*
https://www.hackerrank.com/challenges/between-two-sets/problem
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int getTotalX(int a_size, int* a, int b_size, int* b) {
    // Complete this function
    int first_elem = a[a_size-1];
    int last_elem = b[0];
    int count;
    for(int i=first_elem;i<=last_elem;i++) {
        int flag_a = 1;
        int flag_b = 1;
        for(int j = 0;j<a_size;j++) {
            if((i % a[j]) == 0) continue;
            else {
                flag_a = 0;
                break;
            }
        }
        if(flag_a) {
            for(int j = 0;j<b_size;j++) {
                if((b[j] % i) == 0) continue;
                else {
                    flag_b = 0;
                    break;
                }
            }
        }
        if(flag_a && flag_b) count++;
    }
    
    return count;
}

int main() {
    int n; 
    int m; 
    scanf("%i %i", &n, &m);
    int *a = malloc(sizeof(int) * n);
    for (int a_i = 0; a_i < n; a_i++) {
       scanf("%i",&a[a_i]);
    }
    int *b = malloc(sizeof(int) * m);
    for (int b_i = 0; b_i < m; b_i++) {
       scanf("%i",&b[b_i]);
    }
    int total = getTotalX(n, a, m, b);
    printf("%d\n", total);
    return 0;
}
