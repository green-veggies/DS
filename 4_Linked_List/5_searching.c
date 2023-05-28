
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

int Max(struct Node *p)
{
    int x=0;
    if(p==0)
        return -32786;
    x=Max(p->next);
    if(x>p->data)
        return x;
    else return p->data;
}
// Searching an Element
struct Node * search(struct Node *p,int key)
{
    while(p!=NULL)
    {
        if(key==p->data)
            return p;
        p=p->next;
    }
    return NULL;  
}

int main()
{
    int x;
    printf("enter a number you want to search:");
    scanf("%d",&x);
    struct Node *temp;

    int A[]={3,5,7,10,15,8,12,2};
    create(A,8);
    temp=search(first,x);
    if(temp){
        printf("Key found successfully : %d",temp->data);
    }
    else
        printf("Key not found");
    return 0;
}