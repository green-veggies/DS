#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

void push(struct stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("STACK OVERFLOW\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top >= ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int peek(struct stack *s, int i)
{
    int arrInd = s->top - i + 1;
    if (s->top - i + 1 < 0)
    {
        printf("Enter a valid position");
    }
    else
    {
        return s->arr[arrInd];
    }
}

int main()
{
    struct stack *S;
    S = (struct stack *)malloc(sizeof(struct stack));
    S->size = 5;
    S->top = -1;
    S->arr = (int *)malloc(S->size * sizeof(int));

    // printf("Full %d\n",isFull(S));
    // printf("Empty%d\n",isEmpty(S));
    push(S, 25);
    push(S, 10);
    push(S, 2);
    push(S, 5);
    push(S, 205);
    // printf("Full %d\n",isFull(S));
    // printf("Empty %d\n",isEmpty(S));


                // printing the values from the stack
    for (int j = 1; j <= S->top + 1; j++)
    {
        printf("The value at position %d is %d\n", j, peek(S, j));
    }
    return 0;
}