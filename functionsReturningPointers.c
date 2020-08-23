#include <stdio.h>

int main(){
    int *p;
    int *fun(); //prototype
    p= fun();
    printf("\n%u",p);
    printf("\n %d", *p);
}

int *fun(){
    int i=20;
    return (&i);
}

//gives error