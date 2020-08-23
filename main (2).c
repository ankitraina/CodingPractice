/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void swap(int *x, int *y){
    static int *temp;
    printf("%d\n",temp);
    temp=x;
    printf("%d\n",*temp);
    printf("%d\n",*x);
    x=y;
    y=temp;
    printf("a=%d.......b= %d\n",*x,*y);
}

int main()
{
   printab();

    return 0;
}

void printab()
{
    static int i,a=-3,b=-6;
    i=0;
    while(i<=0){
        if((i++)%2==1)
        continue;
        a=a+i;
        b=b+i;
        
        
    }
    swap(&a,&b);
    printf("a= %d, b=%d",a,b);
}
