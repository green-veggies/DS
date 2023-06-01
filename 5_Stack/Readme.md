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
 