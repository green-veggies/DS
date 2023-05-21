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
// Max element
// int Max(struct Node *p)
// {
//     int max=-32768;
//     while(p)
//     {
//         if(p->data>max)
//         {
//             max=p->data;
//         }
//         p=p->next;
//     }
//     return max;
// }

// Using recursion
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



int main()
{
    int A[]={3,5,7,10,15,8,12,20};
    create(A,8);
    printf("maximum element is %d\n",Max(first));
    return 0;
}