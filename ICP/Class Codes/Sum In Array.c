#include<stdio.h>

int main()
{
	int a[10],i,sum=0;
	
	for(i=0;i<10;i++)
	{
		printf("Enter The Value For Array at Index %d:-",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			sum=sum+a[i];
		}
	}
	
	printf("Addition Of Even Numbers In Array is %d",sum);
	return 0;
}

