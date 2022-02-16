#include<stdio.h>
void st(void);
int b=3,j;
static int c=4,i;
int main()
{
	int a=2,f;
	register int d=5,g;
	static int e=6,h;
	printf("a is auto=%d\nb is external=%d\nc is static global=%d\nd is register=%d\ne is local static=%d\nf is uninitialised auto=%d\ng is register un=%d\nh is static local un=%d\ni is static global un=%d\nj is extern global un =%d\n",a,b,c,d,e,f,g,h,i,j);
	st();
return 0;
}
void st(void)
{
	printf("b is external in sub fun=%d\nc is static global in sub fun=%d\n",b,c);
}


