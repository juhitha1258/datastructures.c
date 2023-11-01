#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *link;
};
int main()
{
  struct node *head=(struct node*)malloc(sizeof(struct node*));
  head->data=60;
  head->link=NULL;
  printf("%d",head->data);
  printf("%d",head->link);
  return 0;
  }
 
