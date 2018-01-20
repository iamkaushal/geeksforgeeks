#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void inserthead(struct node **head , int value)
{
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->data = value;
  temp->next = *head;
  *head = temp;
}

void printlist(struct node *head)
{
  printf("List is : ");
  while(head!= NULL)
  {
    printf("%d ", head->data);
    head = head->next;
  }
  printf("\n");
}

void deletelist(struct node **head)
{
  struct node *current = *head;
  struct node *temp = NULL;
  while(current!=NULL)
  {
    temp = current;
    current = current->next;
    free(temp);
  }
  free(*head);
  *head = NULL;
}

int main()
{
  struct node *head = NULL;

  printf("How many numbers?\n");
  int n;
  scanf("%d",&n );
  int num;
  while(n--)
  {
    scanf("%d", &num);
    inserthead(&head, num);
  }
  printlist(head);

  deletelist(&head);

  printlist(head);
  return 0;
}
