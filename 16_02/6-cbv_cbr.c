#include<stdio.h>
void ref(int *p, int *p1)
{
	int temp=0;
	temp=*p;
	*p=*p1;
	*p1=temp;
}
void val(int a, int b)
{
	int t=0;
	t=a;
	a=b;
	b=t;
	printf("func a=%d\tb=%d\n",a,b);
}
int main()
{
	int a,b;
	printf("enter 2 numbers:\n");
	scanf("%d%d",&a,&b);
	ref(&a,&b);
	printf("main a=%d\tb=%d\n",a,b);
	val(a,b);
	printf("cbv a=%d\tb=%d\n",a,b);
	return 0;

}
