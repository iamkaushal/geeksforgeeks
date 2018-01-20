#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void printlist(struct node *head)
{
    printf("List is : ");
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void insertHead(struct node **head, int n)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = n;
    temp->next = *head;
    *head = temp;
}

void insertAfter(struct node *head, int n, int value)
{
    while(head->data != n)
    {
        if(head->next ==NULL)
        {
            printf("Node not found! \n");
            return 0;
        }

        head = head->next;
    }

    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = head->next;
    head->next = temp;
}

void append(struct node *head, int value)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    while(head->next!=NULL)
    {
        head = head->next;
    }

    temp->data = value;
    temp->next = NULL;
    head->next = temp;
}

int main()
{
    struct node *head = NULL;


    printf("How many numbers?\n");
    int n;
    scanf("%d", &n);
    int x;
    while(n--)
    {
        printf("Enter the number\n");
        scanf("%d", &x);
        insertHead(&head, x);
        printlist(head);
    }

    printf("Insert After \n");

    int y;
    scanf("%d", &y);

    insertAfter(head, y, 100);

    printlist(head);

    printf("Append : ");
    int z;
    scanf("%d", &z);
    append(head, z);

    printlist(head);

    return 0;
}
