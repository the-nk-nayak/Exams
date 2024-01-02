#include<stdio.h>
int binarySearch(int a[], int beg, int end, int val)
{
	int mid;
	if(end>=beg)
	{
		mid=(beg + end)/2;
		if(a[mid]==val)
		{
			return mid+1;
		}
		else if(a[mid]<val)
		{
			return binarySearch(a,mid+1,end,val);
		}
		else{ return binarySearch(a,beg,mid-1,val);
		}
	}
	return -1;
}

int main(){
	int a[]={11,14,25,30,40,41,52,57,70};
	int val,res;
	printf("\n Element to be searcheed is");
	scanf("%d",&val);
	
	res=binarySearch(a,0,8,val);
	
	if (res!=-1)
	{printf("\n Elements Present at %d position fo array",res);}



else{
	printf("Elements not present in the array");
}


return 0;
}
