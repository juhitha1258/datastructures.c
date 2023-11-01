#include<stdio.h>
struct self
{
  int a;
  char c;
  struct self *p;
  };
int main()
   {
     struct self v;
     v.a=10;
     v.c='D';
     v.p=NULL;
     struct self x;
     x.a=20;
     x.c='B';
     x.p=NULL;
   v.p=&x;
  printf("block1 %d %c ",v.a,v.c);
  printf("\nblock2 %d %c",v.p->a,v.p->c);
  
  return 0;
  
  }
