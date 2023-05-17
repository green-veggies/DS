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

