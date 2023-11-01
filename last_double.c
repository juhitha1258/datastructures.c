#include<stdio.h>
#include<stdlib.h>

struct node
{
  struct node *prev;
  int data;
  struct node *next;
};
void insert_end(struct node *head);
int main()
{
  struct node *head=malloc(sizeof(struct node));
  head->prev=NULL;
  head->data=10;
  head->next=NULL;
 
  struct node *current=malloc(sizeof(struct node));
  current->prev=NULL;
  current->data=20;
  current->next=NULL;
  head->next=current;
  insert_end(head);
}
void insert_end(struct node *head)
{
struct node *temp=head;
struct node *new=malloc(sizeof(struct node));
new->prev=NULL;
new->data=30;
new->next=NULL;
while(temp->next!=NULL)
{
  temp=temp->next;
}
temp->next=new;
new->prev=temp;
temp=head;
while(temp!=NULL)
{
  printf("%d",temp->data);
  temp=temp->next;
}
	}
	

