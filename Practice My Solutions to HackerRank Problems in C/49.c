/*
https://www.hackerrank.com/challenges/countingsort4/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct _node {
    char s[10];
    int x;
}node;

void count_sort(node *ar, long int size)
{
    int max_val = 100;
    node temp_arr[size];
    int count_ar[100] = {0};
    long int i;
 
    for(i=0;i<size;i++) count_ar[ar[i].x]++;
    
    for(i=1;i<max_val;i++) count_ar[i] += count_ar[i-1];
    
    for(i=size-1;i>=0;i--) {
        temp_arr[count_ar[ar[i].x]-1] = ar[i];
        --count_ar[ar[i].x];
    }
    for(i=0;i<size;i++) {
        ar[i].x = temp_arr[i].x;
        strcpy(ar[i].s,temp_arr[i].s);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long int size, i;
    char *a = "-";
    
    scanf("%ld",&size);
    
    node *o_ar = (node *)calloc(size,sizeof(node));
    node *t_ar = (node *)calloc(size,sizeof(node));
    
    for(i=0;i<size;i++) {
        scanf("%d %s", &o_ar[i].x, o_ar[i].s);
        t_ar[i].x = o_ar[i].x;
        if(i < size/2) {
            strcpy(t_ar[i].s, a);
        } else {
            strcpy(t_ar[i].s,o_ar[i].s);
        }
    }
    count_sort(t_ar,size);
    for(i=0;i<size;i++) printf("%s ",t_ar[i].s);
    return 0;
}
