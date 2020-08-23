#include<stdio.h>
int main(){
    int i=10,j=20,diff;
    i =7200;
    //printf("Hi %d",sizeOf(int));
    diff= &j- &i;
    diff = diff*sizeof(int);
    printf("\n%d %p", i, &j);
    
    if(&i > &j){
        printf("wow this is good");
    }
    printf(" %d", diff*2);
}

