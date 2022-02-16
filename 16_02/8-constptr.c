#include<stdio.h>
int main()
{
	int x=10,y=20;
	int * const ptr=&x;
//	ptr=&y;
	*ptr=15;
	printf("%d\n",*ptr);
	
}
