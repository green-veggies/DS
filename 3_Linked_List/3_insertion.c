
// Insertion

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node * insertatfirst(struct Node * head,int data){
    struct Node * ptr =(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    /* Allocate memory in heap */

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    (*head).data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 5;
    third->next = fourth;

    fourth->data = 65;
    fourth->next = NULL;

    linkedlisttraversal(head);
    head = insertatfirst(head,95);
    linkedlisttraversal(head); 
    return 0;
}