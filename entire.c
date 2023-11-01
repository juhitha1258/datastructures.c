#include<stdio.h>
#include<stdlib.h>
struct single_linked_list
{
   int data;
   struct single_linked_list *link;
};
void single_linked_list_entire(struct single_linked_list *head);
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
  single_linked_list_entire(head);
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
void single_linked_list_entire(struct single_linked_list *head)
{
   if(temp==NULL)
		printf("Empty list");
	else if(head->link==NULL)
	{
		head=temp->link;
		free(temp);
		temp=NULL;
	}
	
	else 
	{
		while(temp!=NULL)
		{
			head=temp->link;
			//temp=temp->link;
			free(temp);
			temp=head;
		}		
		head=NULL;
	}
		return head;

 }
    
