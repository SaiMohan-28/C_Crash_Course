#include<stdio.h>
int main()
{	
	int x=10,y=15;
	int const* ptr=&x;
	//*ptr=11;
	ptr=&y;
	printf("%d\n",*ptr);
}
