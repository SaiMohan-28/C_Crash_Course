
					/*Basic Preprocessors Understandig Program*/
#include<stdio.h>
#include<stdlib.h>//header file inclusion
#define pie 3.14
#define os 1
#undef pie
#define MAX(dt,fun)	dt fun(dt x,dt y)\
			{\
				return x>y?x:y;\
			}
#define TS "thundersoft"
	
MAX(int,max_i)
MAX(float,max_f)
int main()//main function
{
	printf("%d\n",max_i(5,6));
	printf("%s\n",TS);
	printf("Date=%s\n",__DATE__);
	printf("Time=%s\n",__TIME__);
	printf("File=%s\n",__FILE__);
	printf("Line=%d\n",__LINE__);
	printf("Stdc=%d\n",__STDC__);
	#ifdef os 
		printf("windows\n");
	#else 
		printf("mac\n");
	#endif
	return 0;	
}

