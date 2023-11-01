#include<stdio.h>
#include<stdlib.h>
struct single_linked_list
{
   int data;
   struct single_linked_list *link;
};
void single_linked_list_random(struct single_linked_list *head,int position);
void single_linked_list_traverse(struct single_linked_list *head);

int main()
{
  struct single_linked_list *head=(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
  head->data =10;
  head->link=NULL;
  
  struct single_linked_list *current =(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
  current->data=20;
  current->link=NULL;
  
  head->link=current;
  
  current=(struct single_linked_list *)malloc(sizeof(struct single_linked_list));
  current->data=30;
  current->link=NULL;
 
  head->link->link=current; 
  single_linked_list_random(head,3);
  single_linked_list_traverse(head);
  return 0; 
 }
 
void single_linked_list_traverse(struct single_linked_list *head)
{
      struct single_linked_list *temp=head;
      if(temp==NULL)
      {
      printf("list is empty");
      exit(0);
      }
      while(temp!=NULL)
      {
        printf("%d->",temp->data);
        temp=temp->link;        
      }
      printf("NULL");
}
      
 void single_linked_list_random(struct single_linked_list *head,int position)
 {
    struct single_linked_list *new=(struct single_linked_list*)malloc(sizeof(struct single_linked_list));
    new->data=40;
    new->link=NULL;
    
    struct single_linked_list *temp=head;
    
    position--;
    while(position!=1)
    {
    	temp=temp->link;
    	position--;
    }
    new->link=temp->link;
    temp->link=new;
    //return head;
 }

    
    
