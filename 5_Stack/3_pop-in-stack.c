#include<stdio.h>
#include<stdlib.h>

struct stack {
    int top;
    int size;
    int *arr;
};
int isEmpty(struct stack *ptr){
    if(ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int pop(struct stack *ptr)
{
    if(isEmpty(ptr)){
        printf("Stack Underflow");
        return -1;
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}


int main()
{
    struct stack *s;
    s=(struct stack*)malloc(sizeof(struct stack));
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));

    
    
    return 0;
}