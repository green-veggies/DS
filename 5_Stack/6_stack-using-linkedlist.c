
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*top=NULL;

void push(int x)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
        printf("Stack is Empty");
    else{
        temp->data=x;
        temp->next=top;
        top=temp;
    }
}
 int pop()
 {
    struct node *temp;
    // temp=(struct node*)malloc(sizeof(struct node));
    int x=-1;

    if(top==NULL){
        printf("Stack is Empty\n");
    }
    else{
        temp=top;
        top=top->next;
        x=temp->data;
        free(temp);
        printf("%d is popped\n",x);

    }
    return x;
 }
 void display()
 {
    struct node *p;
    p=top;
    printf("Elements are :\n");
    while(p!=NULL){
        printf("%d",p->data);
        p=p->next;
        printf("\n");
    }
    
 }
int main()
{
    push(10);
    push(40);
    push(19);
    push(75);
    push(99);
    push(52);
    pop();
    pop();
    display();

    return 0;
}