
#include<stdio.h>
#include<stdlib.h>

struct stack{
    int top;
    int size;
    int *arr;
};

void push(struct stack *ptr,int value)
{
    if(ptr->top>=ptr->size-1){
        printf("Stack Overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}

  //  This function prints the topmost value of the stack
int stack_top(struct stack *ptr)
{
    if(ptr->top==-1){
        printf("stack underflow");
    }
    else{
        printf("Topmost element is %d\n",ptr->arr[ptr->top]);
        return ;
    }
}

// This function prints the bottom most element of the stack
void stack_bottom(struct stack *ptr)
{
    if(ptr->top==-1){
        printf("stack underflow");
    }
    else 
    {
        printf("Bottom-most element is %d\n",ptr->arr[0]);
    }

}

int main()
{
    struct stack *s;
    s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=5;
    s->arr=(int*)malloc(s->size*sizeof(int));

    push(s,503);
    push(s,4);
    push(s,20);
    push(s,78);
    push(s,240);

    printf("The elements are:\n");

    for(int i=0;i<=s->size-1;i++){
        printf("%d\n",s->arr[i]);
    }
    stack_top(s);
    stack_bottom(s);

}
    
