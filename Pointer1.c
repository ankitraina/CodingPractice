//swapping numbers using pointers

#include <stdio.h>
void swapr(int*, int*);

int main(){
    int a =10;
    int b=20;

    swapr(&a, &b);
    printf("\na = %d",a);
    printf("\nb = %d",b);
}

void swapr(int *x, int *y){
    int t;
    t= *x;
    *x = *y;
    *y =t;
}