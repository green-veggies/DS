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