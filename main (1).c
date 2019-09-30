/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void swap(int* x , int* y);
int main()
{
   int a, b;
   printf("Enter the value of a");
   scanf("%d",&a);
   printf("Enter the value of b");
   scanf("%d",&b);
   printf("The values of a & b before swapping are: %d %d \n",a,b);
   swap(&a,&b);
   printf("The values of a & b after swapping are given as %d %d",a,b);

    return 0;
}
swap(int *x, int*y){
    
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}

