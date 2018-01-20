#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insert(struct node **head, int value)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = *head;
    *head = temp;
}

void printlist(struct node *head)
{
    printf("list is : ");
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void middle(struct node *head)
{
    int count = 0;
    struct node *mid = head;
    while(head!=NULL)
    {
        if(count & 1) // if count is odd
        {
            mid = mid->next;
        }
        head= head->next;
        count++;
    }
    printf("middle element is : %d \n", mid->data);
}

int main()
{
    struct node *head = NULL;

    insert(&head, 52);
    insert(&head, 55);
    insert(&head, 56);
    insert(&head, 57);
    insert(&head, 58);

    printlist(head);

    middle(head);


    return 0;
}
