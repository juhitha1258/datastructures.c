#include<stdio.h>
#include<stdlib.h>
struct single_linked_list
{
   int data;
   struct single_linked_list *link;
};
struct single_linked_list *single_linked_list_reverse(struct single_linked_list *head);
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
  head=single_linked_list_reverse(head);
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
}
 struct single_linked_list *single_linked_list_reverse(struct single_linked_list *head)
{
      struct single_linked_list *temp1= NULL;
      struct single_linked_list *temp2= NULL;
      while(head!=NULL)
      {
        temp2=head->link;
        head->link=temp1;
        temp1=head;
        head=temp2;
     
     }
     head=temp1;
     return head;
     
}

        
        
