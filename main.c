/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
swap(int, int);

int main()
{
    printf("Hello World");
    
    int a,b;
    printf("Enter the value of a");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    printf("Before swapping values \n");
    printf("\n a=%d \n b =%d\n",a,b) ;
    swap(a,b);
    
    
    printf("After swapping values \n");
    printf("\n a=%d \n b =%d",a,b) ;
    return 0;
}

swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
