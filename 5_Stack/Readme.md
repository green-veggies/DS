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
The function


