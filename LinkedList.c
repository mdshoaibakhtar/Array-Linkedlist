
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int insertAtfirst(struct node *head,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node *));
    ptr->data = data;
    ptr->next = head;
}

int insertAtlast(struct node *head,int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    ptr->data = data;
    struct node *p = head;
    while (p->next != NULL)
    {
        p=p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 25;
    head->next = second;

    second->data = 50;
    second->next = third;

    third->data = 75;
    third->next = fourth;

    fourth->data = 100;
    fourth->next = NULL;

    traversal(head);
    head=insertAtfirst(head,786);
    traversal(head);
    insertAtlast(head,100000);
    traversal(head);
}

