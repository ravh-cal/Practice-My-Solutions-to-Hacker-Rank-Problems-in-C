/*
https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* breakingRecords(int score_size, int* score, int *result_size) {
    // Complete this function
    int high_so_far = score[0];
    int low_so_far = score[0];
    int *result = malloc(2 * sizeof(int));
    *result_size = 2;
    for(int i=1;i<score_size;i++) {
        if(score[i] > high_so_far) {
            high_so_far = score[i];
            result[0]++;
        }
        if(score[i] < low_so_far) {
            low_so_far = score[i];
            result[1]++;
        }
    }
    return result;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *score = malloc(sizeof(int) * n);
    for (int score_i = 0; score_i < n; score_i++) {
       scanf("%i",&score[score_i]);
    }
    int result_size;
    int* result = breakingRecords(n, score, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");


    return 0;
}
