/*
https://www.hackerrank.com/challenges/repeated-string/problem
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    long n; 
    scanf("%ld",&n);
    int s_len = strlen(s);
    long int count = 0;
    for(int i=0;i<s_len;i++) if(s[i]=='a') count++;
    long int rep_count = n/s_len;
    int last_part = n%s_len;
    count *= rep_count;
    if(last_part != 0) for(int i=0;i<last_part;i++) if(s[i]=='a') count++;
    printf("%ld",count);
    return 0;
}
