#include<stdio.h>
int main()
{

 int x=123;
 int *ptr;
 int **ptr1;

 ptr=&x;
 ptr1=&ptr;
 printf(" x value:%d\n",x);
 printf(" single pointer *ptr: %d\n",*ptr);
 printf(" double pointer **ptr:%d\n",**ptr1);
 return 0;
}

