#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void printlist(struct node* head)
{
    while(head!=NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}


void deletenode(struct node *head, int value)
{
    while((head->next)->data!=value)
    {
        if(head->next==NULL)
        {
            printf("Node not found! \n");
            return 0;
        }
        head = head->next;
    }
    struct node *temp = head->next;
    head->next = temp->next;
    free(temp);
}



void insertHead(struct node **head , int value)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = *head;
    *head = temp;
}

int main()
{
    struct node *head = NULL;

    printf("How many numbers? \n");
    int n;
    scanf("%d", &n);
    int x;
    while(n--)
    {
        scanf("%d", &x);
        insertHead(&head, x);
        printlist(head);
    }

    printf("Enter Number to delete : ");
    int num;
    scanf("%d", &num);
    deletenode(head, num);

    printlist(head);

    return 0;
}
