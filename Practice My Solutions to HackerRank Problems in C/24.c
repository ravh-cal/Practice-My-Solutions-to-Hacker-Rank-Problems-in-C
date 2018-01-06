/*
https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long int reverse(long int x)
{
    long long int res = 0;
    for(;x>0;x/=10) res = res * 10 + x%10;
    return res;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int i,j,k,x,r_x,b_d = 0;
    scanf("%ld %ld %ld",&i,&j,&k);
    for(x=i;x<=j;x++) if((abs(reverse(x) - x) % k) == 0) b_d++;
    printf("%ld",b_d);
    return 0;
}
