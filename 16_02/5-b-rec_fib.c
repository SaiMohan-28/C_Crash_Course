#include<stdio.h>
int fib(int i)
{
	if(i==0||i==1)
	return 1;
	else
	return fib(i-1)+fib(i-2);
}
int main()
{
	int n;
	printf("enter num\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("%d\n",fib(i));
	}
	return 0;
}
