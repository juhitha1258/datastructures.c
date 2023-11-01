#include<stdio.h>
#include<stdlib.h>
struct single_linked_list
{
   int data;
   struct single_linked_list *link;
};
void single_linked_list_delete(struct single_linked_list *head);

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
  single_linked_list_delete(head);

  return 0; 
 }

void single_linked_list_delete(struct single_linked_list *head)
{
   struct single_linked_list *temp=head;
   if(head==NULL)
   {
     printf("linked list is empty");
     }
   else
   {
   head=temp->link;
   free(temp);
   }
   temp=NULL;
}
