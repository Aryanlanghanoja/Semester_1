#include<stdio.h>

int main(void)
{
	int a[5],i,p=15,flag=0;
	
	for(i=0;i<5;i++)
	{
		printf("Enter The Number For Array At Index-%d:-",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		if(p==a[i])
		{
			printf("Matched at %d\n",i);
			flag++;
		}
		
		}
		
		if(flag==0)
		{
			printf("Does Not Exists");
		}
		
		printf("%d Is Present %d Times In Array",p,flag);
		
		return 0;
	}




