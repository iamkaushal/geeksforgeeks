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

void inserthead(struct node **head , int value)
{
  struct node *temp = (struct node *)malloc(sizeof(struct node ));
  temp->data = value;
  temp->next = *head;
  *head = temp;
}

int  length(struct node *head)
{
  int count = 0;
  while(head != NULL)
  {
    count ++;
    head = head->next;
  }
  return count ;
}

void nthNodeFromEnd(struct node *head, int n )
{
  int len = length(head);
  if(n > len || n <=0)
  {
    printf("Invalid input\n");
    return ;
  }
  int nth = len - n ;

  while(nth--)
  {
    head = head->next;
  }
  printf("Nth node from last is : %d \n", head->data);
}

int main()
{
  struct node *head = NULL;

  inserthead(&head, 1);
  inserthead(&head, 2);
  inserthead(&head, 6);
  inserthead(&head, 5);
  inserthead(&head, 6);
  inserthead(&head, 7);

  printlist(head);

  printf("Value of n : ");
   int n;
   scanf("%d", &n);
  nthNodeFromEnd(head, n);

  return 0;
}
