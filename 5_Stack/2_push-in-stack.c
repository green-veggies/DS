#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

void push(struct stack *ptr,int value)
{
    if(isFull(ptr)){
        printf("STACK OVERFLOW\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}

int isEmpty(struct stack *ptr){
    if(ptr-> top == -1){
        return 1;
    }
    else{
        return 0;
    }
}


int isFull(struct stack *ptr)
{
    if(ptr->top>=ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }

}

int main()
{
    struct stack *S;
    S=(struct stack *)malloc(sizeof(struct stack));
    S->size=5;
    S->top=-1;
    S->arr=(int*)malloc(S->size*sizeof(int));

    printf("Full %d\n",isFull(S));
    printf("Empty%d\n",isEmpty(S));
    push(S,25);
    push(S,25);
    push(S,25);
    push(S,25);
    push(S,25);
    push(S,25);
    printf("Full %d\n",isFull(S));
    printf("Empty %d\n",isEmpty(S));  
    return 0;
}