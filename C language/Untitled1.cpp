#include<stdio.h>
int main()
{
	int a[6]= {11,12,13,14,15,16};
	int *p= a;
	int i;
	printf("And the number are............\n");
	for (i=0;i<6;i++)
	{
		printf("\n%d\n",p+1);
	}
}
