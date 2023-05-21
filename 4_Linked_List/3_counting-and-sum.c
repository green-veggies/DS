#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
    int i;
    struct Node *tmp,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        tmp=(struct Node*)malloc(sizeof(struct Node));
        tmp->data=A[i];
        tmp->next=NULL;
        last->next=tmp;
        last=tmp;
    }
}

// Counting
int counting(struct Node *p)
{
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return (count);
}

// Counting Using Recursion

// int counting(struct Node *p)
// {
//     if(p==0)
//         return 0;
//     else    
//         return counting(p->next)+1;
// }

// Sum of Data
// int add(struct Node *p)
// {
//     int sum=0;
//     while(p)
//     {
//         sum=sum+p->data;
//         p=p->next;
//     }
//     return (sum);
// }
// Sum using Recursion
int add(struct Node *p)
{
    if(p==0)
        return 0;
    else
        return add(p->next)+p->data;
}


int main()
{
    int A[]={3,5,7,10,15};
    create(A,5);
    printf("length is %d \n",counting(first));
    printf("Sum of data is %d\n",add(first));

    return 0;
}