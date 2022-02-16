#include<stdio.h>
float si(int p,float r, int m)
{
	int si;
	si=p*r*m/1200;
	return si;
}
int main()
{
	int p,m;
	float r,s_i;
	printf("enter p r m :\n");
	scanf("%d%f%d",&p,&r,&m);
	s_i= si( p,r,m);
	printf("%f",s_i);
	return 0;
}

