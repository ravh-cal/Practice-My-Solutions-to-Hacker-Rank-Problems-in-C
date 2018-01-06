/*
https://www.hackerrank.com/challenges/save-the-prisoner/problem
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long int saveThePrisoner(long long int num_of_p, long long int num_of_s, long long int p_num){
    // Complete this function
    return (((p_num+num_of_s-1)%num_of_p)?((p_num+num_of_s-1)%num_of_p):num_of_p);
}

int main() {
    int t; 
    scanf("%d", &t);
    for(int a0 = 0; a0 < t; a0++){
        long long int n; 
        long long int m; 
        long long int s; 
        scanf("%lld %lld %lld", &n, &m, &s);
        long long int result = saveThePrisoner(n, m, s);
        printf("%lld\n", result);
    }
    return 0;
}
