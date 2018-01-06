/*
https://www.hackerrank.com/challenges/append-and-delete/problem
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void check(char *s, char *t, int k)
{
    int len_s = strlen(s);
    int len_t = strlen(t);
    int total_len = len_s + len_t;
    int diff = 0;
    while(s[diff] == t[diff]) diff++;
    if(total_len <= k+diff*2 && total_len%2 == k%2 || total_len < k) printf("Yes");
    else printf("No");
}
int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    char* t = (char *)malloc(512000 * sizeof(char));
    scanf("%s",t);
    int k; 
    scanf("%d",&k);
    check(s,t,k);
    return 0;
}
