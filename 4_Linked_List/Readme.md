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
- For this first we will define an integer variable `count=0` and it will increase with +1 as p will move to next node till the pointer will have a null value.
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
### Maximum element ###
- As we know the logic of finding a maximum number, we will define an integer variable `max=MIN_INT` and it will iterate and compare with data of every node and it will take the value which will be greater than `max`
```
int max(struct Node *p)
{
    int m=MIN_INT;
    while(p)
    {
        if(p->data>m){
            m=p->data;
        }
        p=p->next;
    }
    return m;
}
```
- Using recursion
```
int max(struct Node *p)
{
    int x=0;
    if(p==0)
        return MIN_INT;
    else{
        x=max(p->next);
        if(x>p->data)
            return x;
        else
            return p->data;
    }
}
```
### Searching an element ###

- We use Linear search for searching a linked list.
    - Binary search is not suitable for a linked list.
- Let us define a function 
```
void search(struct Node* p,int key)
while(p!=NULL)
{
    if(key==p->data)
        return p;
    p=p->next;
}
return NULL;
```
And also in main function we will define a new node `temp` and a new variable `x` which will pass through the function and provide the favourable results.

## Insertion ##
- There are 2 types of insertion:
    - Insertion at beginning.
    - Insertion after another node.

### Insertion at beginning ###
- First of all we will create a new node and insert a data in it. That new node will point to the `firstnode` and then move `first` from `firstnode` to `newnode`.

A new node will be created
```
Node *t= new Node;
t->data=x;
t->next=first;
first=t;
```

### Insertion at given position ###

- Let us insert after position 4
    - We will take `pos=4`
    - We will create a `new Node` and insert it after pos=4
    - The New node create will have some data in it and it will point to the next node which is 5th node in this case.
    - And the previous Node will point on this new node instead of 5th node.

```
Node *t=new Node;
t->data=x;
p=first;
for(int i=0;i<pos-1;i++)
{
    p=p->next;
}
t->next=p->next;
p->next=t;
```
### We can insert at any position using this function ###

void Insert(int pos,int x)
{
    struct Node *t,*p;
    if(pos==0)
    {
        t=new Node;
        t->data=x;
        t->next=first;
        first=t;
    }
    else if(pos>0)
    {
        p=first;
        for(int i=0;i < pos-1 && p;i++)
            p=p->next;
        if(p)
        {
            t=new Node;
            t->data=x;
            t->next=p->next;
            p->next=t;
        }
    }
}
- The function Insert takes two parameters: `pos` (position) and `x `(value to be inserted).
- It creates a new node `t` to hold the `data` and initialize its data value with `x`.
- If `pos` is `0`, it means the node should be inserted at the beginning of the linked list.
    - It assigns the next pointer of the new node (`t->next`) to point to the current first node (`first`).
    - Then it updates the `first` pointer to point to the new node (`t`), making it the new first node of the linked list.
- If `pos` is greater than `0`, it means the node should be inserted at a specific position in the linked list.
    - It starts by assigning the `first` pointer to the temporary pointer `p`.
    - It then traverses the linked list using a `for` loop until it reaches the node just before the desired position (`pos-1`) or the end of the list (`p `becomes `NULL`).
    - If a valid position is reached, it creates the new node `t` with the data value `x`
    - It assigns the `next` pointer of `t` to point to the node that was originally at the desired position (`p->next`).
    - Finally, it updates the `next` pointer of the previous node (`p->next`) to point to the new node `t`, effectively inserting it into the linked list.