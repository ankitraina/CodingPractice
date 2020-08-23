#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void append(struct node **, int);
void display(struct node *);

int main()
{

    struct node *start;
    start = NULL;
    append(&start, 1);
    append(&start, 2);
    append(&start, 3);
    // display(start);

    while (start != NULL)
    {
        printf("\nElements in linked list are:  %d", start->data);
        start = start->next;
    }

    return 1;
}

void append(struct node **p, int num)
{

    struct node *q, *temp;
    temp = *p;

    if (*p == NULL)
    {
        temp = malloc(sizeof(struct node));
        temp->data = num;
        temp->next = NULL;
        *p = temp;
        //printf("value is = %d", num);
    }
    else
    {

        //temp = *p;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        q = malloc(sizeof(struct node));
        q->data = num;
        q->next = NULL;
        temp->next = q; //the address of new node is inserted into the previous node
        printf("\nI am here");
    }
}

void display(struct node *n)
{

    while (n != NULL)
    {
        printf("\nElements in linked list are:  %d", n->data);
        n = n->next;
    }
}