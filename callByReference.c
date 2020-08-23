#include <stdio.h>

int swap(int* , int*);
int main(){

    int i=7;
    int j=10;
    printf("value of i & j BEFORE swapping are: i=%d and j= %d", i,j);
    swap(&i, &j);
    printf("\nvalue of i & j AFTER swapping are: i=%d and j= %d", i,j);
}
int swap(int *p, int *q){

    int c = *p;
    *p= *q;
    *q= c;
    return 0;

}