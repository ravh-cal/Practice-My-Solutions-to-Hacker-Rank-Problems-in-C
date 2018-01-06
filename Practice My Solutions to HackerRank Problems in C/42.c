/*
https://www.hackerrank.com/challenges/big-sorting/problem
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

typedef struct node_ {
    long int length;
    char *value;
}node;

/*
void swap(node *a, node *b)
{
    node t = *a;
    *a = *b;
    *b = t;
}

void my_selection_sort(node *ar, long int size)
{
    for(long int i=0;i<size-1;i++) {
        long int min_ind = i;
        for(long int j=i+1;j<size;j++) {
            if(ar[j].length < ar[min_ind].length) {
                min_ind = j;
            }
            if(ar[j].length == ar[min_ind].length) {
                for(long int k = 0; k < ar[j].length; k++) {
                    char a = ar[j].value[k];
                    char b = ar[min_ind].value[k];
                    if(a == b) continue;
                    if((int)a < (int)b) {
                        min_ind = j;
                        break;
                    } else if ((int)a > (int)b) {
                        break;
                    }
                }
            }
        }
        swap(&ar[i],&ar[min_ind]);
    }
    return;
}
*/
int my_comparator(const void *p, const void *q)
{
    char *a_ar = ((node *)p)->value;
    long int a_len = ((node *)p)->length;
    char *b_ar = ((node *)q)->value;
    long int b_len = ((node *)q)->length;
    
     if(a_len == b_len) {
        for(long int i = 0; i < a_len; i++) {
            char a = a_ar[i];
            char b = b_ar[i];
            if(a == b) continue;
            if((int)a < (int)b) {
                return -1;
            } else {
                return 1;
            }
        }
    }
    
    return (a_len - b_len);
}

int main(){
    // Enter your code here. Read input from STDIN. Print output to STDOUT
    long int size;
    char inp[1000000];
    long int len = 0;
    scanf("%ld",&size);
    node *node_array = malloc(sizeof(node)*size);
    for(long int i=0;i<size;i++) {
        scanf(" %s", inp);
        len = strlen(inp);
        node_array[i].value = (char *) malloc(sizeof(char)*len+1);
        memcpy(node_array[i].value, inp, len);
        node_array[i].value[len] = '\0';
        node_array[i].length = len;
    }
    qsort((void*)node_array, size, sizeof(node_array[0]), my_comparator);
  //  my_selection_sort(node_array, size);
        
    for(long int i=0;i<size;i++) {
        printf("%s \n",node_array[i].value);
        free(node_array[i].value);
    }
    free(node_array);
    return 0;
}