
#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

// Function to check if stack is empty
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Function to check if stack is full
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // struct stack S;
    // S.size=20;
    // S.top=-1;
    // S.arr=(int *)malloc(S.size*sizeof(int));
    struct stack *S;
    S = (struct stack *)malloc(sizeof(struct stack));
    S->size = 20;
    S->top = -1;
    S->arr = (int *)malloc(S->size * sizeof(int));

    // S->arr[0] = 10;
    // S->top++;

    // Checking stack is empty or not
    if (isEmpty(S))
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("Stack is not empty");
    }
    return 0;
}