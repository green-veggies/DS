# Stack #

- Stack is Linear Data structure.
- Operations are performed in `LIFO` or `FILO` (LAST in FIRST out) order.
- We cannot remove lower item which is under another without removing upper item.

### Applications of Stack ###

1. Used in Function Calls.
2. Infix to postfix conversion (and other similar conversions)
3. Parenthesis matching and more...

## Stack ADT ##

In order to create a stack, we need a pointer to the topmost element to gain knowledge about the element which is on the top so that any operation can be carried about. Along with that, we need the space for the other elements to get in and their data.

*Here are some of the basic operations we would want to perform on stacks:*

- push(): to push an element into the stack
- pop(): to remove the topmost element from the stack

- peek(index): to return the value at a given index

- isempty() / isfull() : to determine whether the stack is empty or full to carry efficient push and pull operations.

## Implementation ##

Stack can be implemented using an `Array`or `Linked List`

### Implementing Stack Using Array ###

```
struct stack{
    int size;
    int top;
    int *arr;
};
```
So, the struct above includes as its members, the size of the array, the index of the top element, and the pointer to the array we will make.

To use this struct,

- You will just have to declare a struct stack
- Set its top element to -1. 
- Furthermore, you will have to reserve memory in the heap using malloc.


We can define a stack as:
```
struct stack S;
S.size=20;
S.top=-1;
S.arr=(int*)malloc(S.size*sizeof(int));
```

- For Push()
```
struct stack *S;
S=(struct stack*)malloc(sizeof(struct stack));


S->size=5;
S->top = -1;
S->arr=(int*)malloc(sizeof(int));
```
We will declare a function push()
```
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
```
 * The function "push" adds a value to the top of a stack if it is not already full.
 *  `ptr` a pointer to the stack structure
 *  `value` The value to be pushed onto the stack.

- For Pop()
```
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
```
 * This function pops an element from the top of a stack and returns its value.
 *  `ptr` A pointer to a struct stack, which represents the stack data structure.
 * `return` the integer value that was popped from the stack.

 ### Peek ###

 It refers to looking for the element at a specific index in a stack. 
 - Peek operation requires the user to give a position to peek at as well. Here, position refers to the distance of the current index from the top element +1.

 `top-i+1;`

```
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
```
 
 * The function "peek" returns the value of an element in a stack at a specified position. 
 *  `s` a pointer to a stack structure
 *  `i` The parameter "i" in the "peek" function is the position of the element that we want to peek in the stack. It represents the distance of the element from the top of the stack. For example,if `i=1` we want to peek the top element of the stack, if  `return` the element at the i-th position from the top of the stack.

### Time complexities of other operations: ###

- isEmpty(): This operation just checks if the top member equals -1. This works in a constant time, hence, O(1).
- isFull(): This operation just checks if the top member equals size -1. Even this works in a constant time, hence, O(1).
- push(): Pushing an element in a stack needs you to just increase the value of top by 1 and insert the element at the index. This is again a case of O(1).
- pop(): Popping an element in a stack needs you to just decrease the value of top by 1 and return the element we ignored. This is again a case of O(1).
- peek(): Peeking at a position just returns the element at the index, (top - position + 1), which happens to work in a constant time. So, even this is an example of O(1).
*So, basically all the operations we discussed follow a constant time complexity*

The below function is used to display the topmost element of Stack
```
int stackTop(struct stack* sp){
    return sp->arr[sp->top];
}
```
And similarly below function is used to display the bottom-most element in Stack
```
int stackBottom(struct stack* sp){
    return sp->arr[0];
}
```

# Implementation of Stack using Linked List #

- One side will be used for `push` and `pop` operations 
- Head of linked list can be considered as `top`
- Stack is empty when (`top==NULL;`)


- Push()


 ```
 void push(int x)
 {
    node *t = newnode;
    if(t==NULL)
        printf("Stack Overflow");
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
 }
 ```
 - Pop()

 ```
 int pop()
 {
    node *p;
    int x=-1;
    if(top==NULL)
        printf("Stack is Empty");
    else{
        p=top;
        top=top->next;
        x=p->data;
        free(p);
    }
    return x;
 }
 ```
 - Peek()

 ```
 int peek(int pos)
 {
    int x=-1;
    node *p=top;
    for(int i=0;p!=NULL && i<pos-1;i++);
        p=p->next;
    if(p!=NULL)
        return p->data;
    else 
        return -1;
 }
 ```
 - Stack_top()
 ```
 {
    if(top)
        return top->data;
    return -1;
 }
 ```

 - isFull()

 ```
 int isFull() {
    node *t=newnode;
    int r=t ? 1 : 0;
    free(t);
    return r;
 }
 ```

 - isEmpty()

 ```
 int isEmpty()
 {
    return top ? 0 : 1;
 }
 ```

## Parenthesis Matching ##
- Here expressions are given and we have to look whether the parenthesis are balanced or not.
` ((a+b)*(c-d))`
For opening parenthesis there must be a closing parenthesis.
- We can take a stack
    - If there is opening bracket thwn `push()` it into stack
    - ignore symbols like `a,+,b`
    - On getting a closing bracket `pop()` the opening bracket from the stack.
    - ignore `*,c,-,d` and `pop()`out the bracket from the stack.

- If after all scaning the stack is not empty i.e. there is opening bracket in stack 
                 or
- If at the end a closing bracket is there but stack is empty then also parenthesis are not balanced.

We can define a function
```
int parenthesisMatch(char* exp)
{
   struct stack *s;
   // create the stack
   for(int i=;exp[i]!='\0';i++){
        if(exp[i]=='('){
            push(s,exp[i]);
        }
        else if(exp[i]==')'){
            if(isEmpty(s)){
                return 0;
            }
            pop(s);
        }
   }
   if(isEmpty(s)) return 1;
   else return 0;
}
```