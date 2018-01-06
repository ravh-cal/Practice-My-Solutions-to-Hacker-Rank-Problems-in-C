/*
https://www.hackerrank.com/challenges/strange-advertising/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int total_liked = 0;
    int received = 5;
    int liked, discarded;
    for(int i=0;i<n;i++) {
        liked = floor(received/2);
        discarded = received - floor(received/2);
        received = (received - discarded) * 3;
        total_liked += liked;
    }
    printf("%d",total_liked);
    return 0;
}
