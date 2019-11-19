/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct Node{
int data;   
struct Node* next;
};

void PrintLinkedList(struct Node* n){
    
    while(n != NULL){
        printf("%d", n->data);
        n= n->next;
    }
    
    
}

int main()
{
  struct Node * head =NULL;
  struct Node * third = NULL;
  struct Node * second =NULL;
  
  head = (struct Node*) malloc(sizeof(struct Node));
  second = (struct Node*) malloc(sizeof(struct Node));
  third = (struct Node*) malloc(sizeof(struct Node));
 head->data =1;
 head->next = second;
 second->data =2;
 second->next=third;
 third->data =3;
 third->next = NULL;
 
 PrintLinkedList(head);
 
 return 0;
}
