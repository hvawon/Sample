#include <stdio.h>
#include <stdlib.h>
int i,j;
#define ONE 1;
void v_func(int i)
{
	int a;
	int vv[i];
	for(a=0;a<i; a++)
	{
		printf("Input vv[%d]\n",a);
		scanf("%d", &vv[a]);
	}
	printf("vv[%d]:\n",i);
	for(a=0;a<i;a++)
	{
		printf("%d ", vv[a]);
	}
	printf("\n");
}
int main()
{
	i = i-1-ONE;
	printf("PATH = %s \n",getenv("PATH"));
	printf("Hello World!\nPlease input i j:\n");
	scanf(" %d %d",&i,&j);
	printf("i+j=%d \n",i+j);
	v_func(i);
	return 0;
}	
