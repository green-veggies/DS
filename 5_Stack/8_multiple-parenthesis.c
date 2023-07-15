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

int match(char a,char b)
{
    if(a=='(' && b==')'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }
    if(a=='{' && b=='}'){
        return 1;
    }
    else
    return 0;
}

int multiple_parenthesis_match(char * exp)
{
    // create and initialize the stack
    struct stack *s;
    s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=100;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char pop_ch;
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{'){
            push(s,exp[i]);
        }
        else if(exp[i]==')' || exp[i]==']' || exp[i]=='}'){
            if(isEmpty(s)){
                return 0;
            }
            pop_ch = pop(s);
            if(!match(pop_ch,exp[i])){
                return 0;
            }
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
    char * exp = "[a+b(c-d)]}";
    if(multiple_parenthesis_match(exp)){
        printf("Parenthesis is Matching\n");
    }
    else{
        printf("Parenthesis is not matching ");
    }
}