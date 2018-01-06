/*
https://www.hackerrank.com/challenges/non-divisible-subset/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int min(int a, int b) {
    return((a<=b) ? a : b);
}
int max(int a, int b) {
    return((a>=b) ? a : b);
}
void max_sub_non_div_by_k(int *ar, int n, int k)
{
    int mod_ar[k];
    memset(mod_ar,0,sizeof(mod_ar));
    for(int i=0;i<n;i++) mod_ar[ar[i]%k]++;
    if(k%2==0) mod_ar[k/2] = min(mod_ar[k/2],1);
    int res = min(mod_ar[0],1);
    for(int i=1;i<=k/2;i++) res += max(mod_ar[i],mod_ar[k-i]);
    printf("%d",res);
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k;
    scanf("%d %d",&n,&k);
    int ar[n];
    for(int i=0;i<n;i++) scanf("%d",&ar[i]);
    max_sub_non_div_by_k(ar,n,k);
    return 0;
}
