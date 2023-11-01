#include<stdio.h>
#include<stdlib.h>
struct node 
{ 
  struct node *prev_link;
  int data;
  struct node *next_link;
  };
  void double_linked_list_traverse(struct node *head);
  void double_linked_random(struct node *head,int position);
  int main()
  {
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node*));
    head->prev_link=NULL;
    head->data=10;
    head->next_link=NULL;
    printf("%d",head->data);
    struct node *current;
    current=(struct node*)malloc(sizeof(struct node*));
    current->prev_link=NULL;
    current->data=20;
    current->next_link=NULL;
    head->next_link=current;
    current->prev_link=head;
    printf("->created successfully");
    double_linked_list_traverse(head);
    return 0;
    }
  void double_linked_list_traverse(struct node *head)
{
      struct node *temp=head;
      if(temp==NULL)
      {
      printf("list is empty");
      exit(0);
      }
      while(temp!=NULL)
      {
        printf("\n%d<=>",temp->data);
        temp=temp->next_link;        
      }
      printf("NULL");
      }
  void double_linked_list_random(struct node *head,int position)
 {
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=40;
    new->next_link=NULL;
    
    struct node *temp=head;
    position--;
    while(position!=2)
    {
    	temp=temp->next_link;
    	position--;
    }
    new->prev_link=temp->next_link;
    temp->prev_link=new;
    
}
    
    
    
    
    
    
    
    
