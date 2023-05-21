#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
// Function to create linked list from an array
void create(int A[],int n)
{
    int i;
    struct Node *tmp,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        tmp=(struct Node *)malloc(sizeof(struct Node));
        tmp->data=A[i];
        tmp->next=NULL;
        last->next=tmp;
        last=tmp;
    }
}
// Function to traverse and print data of linked list using Recursion
void Rdisplay(struct Node * p)
{
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        Rdisplay(p->next);
        p=p->next;
    }
}

int main()
{
    int A[]={3,5,7,10,15};
    create(A,5);
    Rdisplay(first);
    return 0;
}