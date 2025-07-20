#include<stdio.h>

void maxn(int *max,int arr[],int n)
{
	*max=arr[0];
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]>*max)
		{
			*max=arr[i];
		}
	}
}

int main()
{
	int n,max;
	
	printf("Enter The Value Of N:-");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	maxn(&max,arr,n);
	
	printf("The Maximum Number Is %d",max);
	
	return 0;
	
}