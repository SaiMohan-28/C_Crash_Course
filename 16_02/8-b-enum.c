#include<stdio.h>
enum days{mon=1000,tue,wed,thur,fri,sat};
int main()
{
	enum days day;
	day = fri;
	printf("%d\n",day);
	return 0;
}
