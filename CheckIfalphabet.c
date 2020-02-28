/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
       char c;
       printf("Enter a character ");
       scanf("%c", &c);
       
       if((c >='a' && c <= 'z') ||  (c >= 'A' && c <='Z')){
           
           printf("%c is an alphabet");
       }else{
           printf("%c is not an alphabet");
       }
    return 0;
}
