#include<stdio.h>

int main(void)
{
	int a[10],count,sum=0,i=0,j;
	
	for(i=0;i<10;i++)
	{
		printf("Enter The Value For Array At Index-%d:-",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				break;
			}
		}
		if(j==a[i])
		{
			count++;
			sum=sum+a[i];
		}
	}
	
	printf("There Are %d Prime Numbers in Array\n",count);
	printf("The Sum Of Prime Numbers Present In Array Is %d",sum);
	
	return 0;
}






