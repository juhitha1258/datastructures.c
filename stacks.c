#include<stdio.h>
#define MAX_SIZE 5
int stack[MAX_SIZE];
int top=-1;

int isempty()
{
return top==-1;
}

int isfull()
{
return top==MAX_SIZE -1;
}

int peek()
{
if(isempty())
printf("Stack is empty");
else
return stack[top];
}

int push(int value)
{
if(isfull())
printf("Stack is full");
else
return stack[++top]=value;
}

int pop()
{
if(isempty())
printf("Stack is empty");
else
return stack[top--];
}

int display_stack()
{
if(isempty())
printf("Stack is Empty");
else
{
for(int i=top;i>=0;i--)
printf("%d ",stack[i]);
}
}

int main()
{
push(10);
push(20);
push(30);
push(40);
printf("Before pop operation\n");
display_stack();
printf("\nPeek value:%d",peek());
pop();
pop();
printf("\nAfter pop operation\n");
display_stack();
}



