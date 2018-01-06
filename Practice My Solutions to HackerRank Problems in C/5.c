/*
Input Format

The first line contains a single integer, . The next  lines denote the matrix's rows, with each line containing space-separated integers describing the columns.

Constraints

Output Format

Print the absolute difference between the two sums of the matrix's diagonals as a single integer.
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
    int a[n][n];
    int diag_diff =0;
    int pri_diag_sum = 0;
    int sec_diag_sum = 0;
    for(int row = 0; row < n; row++){
       for(int col = 0; col < n; col++){
          scanf("%d",&a[row][col]);
       }
    }
    for(int i = 0; i<n; i++) {
        pri_diag_sum += a[i][i];
    }
    for(int i =0, j = n-1; i < n && j >= 0; i++, j--) {
        sec_diag_sum += a[i][j];
    }
    diag_diff = abs(pri_diag_sum - sec_diag_sum);
    printf("%d", diag_diff);
    return 0;
}
