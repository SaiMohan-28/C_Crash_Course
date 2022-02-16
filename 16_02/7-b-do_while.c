#include<stdio.h>
int main()
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	do
	{
		printf("%d\n",n);
		n--;
	}
	while(n);
	return 0;
}
