# LINKED LIST #

- A 'linked list' is a collection of elements called nodes, where each node contains two parts: the data and a pointer to the next node in the list. The nodes are not stored in contiguous memory locations like an array. Instead, they can be scattered in memory and connected to each other through pointers.
```
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

head = (struct Node*)malloc(sizeof(struct Node));
head->data = 1;
head->next = NULL;

struct Node* second = (struct Node*)malloc(sizeof(struct Node));
second->data = 2;
second->next = NULL;

head->next = second;

// The linked list now contains 1 -> 2 -> NULL
```
- One of the main differences between an array and a linked list is the way they handle memory allocation. Arrays are allocated in a contiguous block of memory, while linked lists are allocated dynamically using heap memory. This means that linked lists can grow or shrink dynamically, while arrays have a fixed size.

## Creating a Node ##

- Defining structure of Node
```
struct Node {
    int data;
    struct Node *next
};
```
- For creating a node first we need a pointer
```
struct Node *p;
p=(struct Node *)malloc(sizeof(struct Node));
p->data=10;
p->next=0;
```
Here, p is pointing to next which has address as 0,which means it is pointing to null.

### Displaying a Linked List ###

 `struct Node * p = first;`
 - By this we are on the first node 
 
 - We have to move to the next pointer and from there it's next pointer
        - For doing this we have to use `while` loop.
Code will look like this
```
struct Node * p = first;
while(p!=0) 
{
    printf("%d",p->data);
    p=p->next;
}
```
We can also put this in display function as:
```
display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
}
```
### Display using Recursion ###
For displaying using recursion we will simply replace `p=p->next;`
with `display(p->next);` 
```
display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d",p->data);
        display(p->next);
    }
}
```
## Counting Nodes ##
- For this first we will define a integer variable `count=0` and it will increase with +1 as p will move to next node till the pointer will have a null value.
- We can do this by defining a function.
```
int counting(struct Node *p)
{
    int count=0;
    while(p!=NULL)
    {
        c++;
        p=p->next;
    }
    return(count);
}
```
And we can also do this by using recursion
```
int counting(struct Node *p)
{
    if(p==0)
    {
        return 0;
    }
    else
    {
        return counting(p->next)+1;
    }
}
```
- The function is called with a pointer `p`to the head node of the linked list.
- In the first condition, `if (p == 0)`, the function checks if the pointer `p` is `NULL` or 0, indicating the end of the linked list has been reached. If p is NULL, it means there are no more nodes in the list, so the function returns 0 as the count.
- If `p` is not NULL, the function executes the else block. It recursively calls `counting` with the next node in the linked list, `p->next`, and adds `1` to the result.
- The recursive call `counting(p->next)` continues traversing the linked list, moving to the next node until it reaches the end (`NULL`).
- As the recursive calls unwind, each call adds `1` to the count. Eventually, the final result is the total number of nodes in the linked list.

Or we can also do this by recursion
```
int counting(struct Node *p)
{
    int x=0;
    if(p)
    {
        x=counting(p->next);
        return x+1;
    }
}
```
- Inside the function, an integer variable `x` is declared and initialized to `0`. This variable will hold the count of nodes.
- The code checks if the pointer `p` is not `NULL` (i.e., if (p)). If `p` is not `NULL`, it means there is a node present.
- Inside the `if` condition, the function recursively calls `counting` with the next node in the linked list, `p->next`. This recursive call moves the traversal to the next node.
- The result of the recursive call, which represents the count of remaining nodes in the linked list, is stored in the variable `x`.
- Finally,`x` is incremented by `1` and returned as the count of nodes in the linked list.

## Sum of Data ##
- It is quite same as `counting` all we have to do is instead of counting we have to define a variable `int sum=0` and on every iteration `sum=sum+p->data;`
```
int add(struct Node *p)
{
    int sum=0;
    while(p)
    {
        sum=sum+p->data;
        p=p->next;
    }
    return(sum);
}
```
- Using Recursion
```
int add(struct Node *p)
{
    if(p==0)
        return 0;
    else
        return add(p->next)+p->data;
}
```