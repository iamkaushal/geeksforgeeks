#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void inserthead(struct node **head, int value)
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

void reverselist(struct node **head)
{
  struct node *current = *head;
  struct node *prev = NULL;
  struct node *next;

  while(current!=NULL)
  {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  *head = prev;
}

int main()
{
  struct node *head = NULL;

  inserthead(&head, 5);
  inserthead(&head, 4);
  inserthead(&head, 3);
  inserthead(&head, 2);
  inserthead(&head, 1);

  printlist(head);

  reverselist(&head);
  printlist(head);

  return 0;
}
