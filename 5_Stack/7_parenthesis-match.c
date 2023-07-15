
#include<stdio.h>
#include<stdlib.h>
struct stack {
    int top; 
    int size;
    char *arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else {
        return 0;
    }
}

void push(struct stack *ptr, char value)
{
    if(ptr->top>=ptr->size-1){
        printf("Stack Overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
        printf("Element pushed %c\n",value);
    }
}

char pop(struct stack *ptr)
{
    if(isEmpty(ptr)){ 
        printf("Stack Underflow\n");
        return -1;
    }
    else{
        char value = ptr->arr[ptr->top];
        ptr->top--;
        printf("%c is popped\n",value);
        return value;
    }
}

int parenthesis_match(char * exp)
{
    // create and initialize the stack
    struct stack *s;
    s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=100;
    s->arr = (char *)malloc(s->size * sizeof(char));
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='('){
            push(s,'(');
        }
        else if(exp[i]==')'){
            if(isEmpty(s)){
                return 0;
            }
            pop(s);
        }
    }
    if(isEmpty(s)){
        return 1;
    }
    else{
        return 0;
    }
}

void main()
{
    char * exp = "(((()))))";
    if(parenthesis_match(exp)){
        printf("Parenthesis is Matching\n");
    }
    else{
        printf("Parenthesis is not matching ");
    }
}