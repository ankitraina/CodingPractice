#include <stdio.h>
#include <stdlib.h>

//structure containing a data part & a link part
struct node
{
    int data;
    struct node *link;
};

void append(struct node **, int); //declaration

void display(struct node *);

int main()
{
    struct node *p;
    p = NULL; //empty linked list
    printf("\n Number of elements in linked list ");
    append(&p, 1);
    append(&p, 2);
    append(&p, 3);
    display(p);
    return 1;
}

/*
   append() adds a node. append() has to deal with two situations. 
   whether the node is being added to an empty list
   or node is being added to the end of a linked list
*/

void append(struct node **q, int num)
{
    struct node *temp, *r;
    temp = *q;

    if (*q == NULL)
    {
        //if list is empty it creates the first node
        temp = malloc(sizeof(struct node));
        temp->data = num;
        temp->link = NULL;
        *q = temp; //*q means value at q i.e. p & p is made to point to first node
    }
    else
    {
        temp = *q;
        while (temp->link != NULL)
        {
            //go to last node
            temp = temp->link;
        }
        //add the node at the end
        r = malloc(sizeof(struct node));
        r->data = num;
        r->link = NULL;
        temp->link = r;
    }
}

void display(struct node *q)
{
    printf("\n");
    while (q != NULL)
    {
        printf("\n%d", q->data);
        q = q->link;
    }
}
