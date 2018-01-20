#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void printlist(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int length(struct node* head)
{
    int count = 0;

    while(head!= NULL)
    {
        count++;
        head = head->next;
    }
    return count ;
}

void inserthead(struct node **head, int value)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = value;
    temp->next = *head;
    *head = temp;
}


int main()
{
    struct node* head = NULL;

    inserthead(&head, 5);
    inserthead(&head, 4);
    inserthead(&head, 4);
    inserthead(&head, 4);
    inserthead(&head, 4);
    inserthead(&head, 4);
    inserthead(&head, 6);
    inserthead(&head, 7);
    inserthead(&head, 8);
    inserthead(&head, 9);

    printlist(head);
    printf("length : %d\n", length(head) );

    return 0;
}
