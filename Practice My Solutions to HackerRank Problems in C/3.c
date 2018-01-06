/*
Input Format

The first line contains  space-separated integers, , , and , describing the respective values in triplet . 
The second line contains  space-separated integers, , , and , describing the respective values in triplet .

Constraints

Output Format

Print two space-separated integers denoting the respective comparison points earned by Alice and Bob.

*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int a0, int a1, int a2, int b0, int b1, int b2, int *result_size){
    // Complete this function
    int A[3] = {a0, a1, a2};
    int B[3] = {b0, b1, b2};
    int *result = (int *) malloc(sizeof(int) * 2);
    for(int i =0; i < 3; i++) {
        if (A[i] == B[i]) continue;
        if (A[i] > B[i]) {
            result[0] += 1;
        } else if (A[i] < B[i]) {
            result[1] += 1;
        }
    }
    *result_size = 2;        
    return result;
}

int main() {
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d", &b0, &b1, &b2);
    int result_size;
    int* result = solve(a0, a1, a2, b0, b1, b2, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}
