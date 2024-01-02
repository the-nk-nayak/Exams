#include<stdio.h>
int main()
{
	int a[]={10,20,30,40,50,60};
	int pos=-1;
	int item;
	int i;
	printf("Enter the element you want to search");
	scanf("%d",&item);
	for(i=0;i<6;i++)
	{
		if (a[i]==item)
		{
			pos=item+1;
			
			break;
		}
		
	}
	if(pos=-1)
	{
		printf("Element found at %d",pos);
	}
	else
	{
		printf("Element not found");
	}
}
