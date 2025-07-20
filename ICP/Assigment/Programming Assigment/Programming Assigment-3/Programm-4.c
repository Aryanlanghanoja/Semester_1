#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5],odd[5],even[5],oddn=0,evenn=0;
	
	for(int i=0;i<5;i++)
	{
		printf("Enter The Value at a[%d]:-",i);
		scanf("%d",&a[i]);
		
		if(a[i]%2==0)
		{
			even[evenn]=a[i];
			evenn++;
		}
		
		else
		{
			odd[oddn]=a[i];
			oddn++;
		}
		
	}
	
	printf("\n\n");
	
	printf("Even Numbers In Array Are\n");
		
	for(int i=0;i<evenn;i++)
	{
		printf("%d ",even[i]);
	}
	
	printf("\n");
	
	printf("Odd Numbers In Array Are\n");
		
	for(int i=0;i<oddn;i++)
	{
		printf("%d ",odd[i]);
	}
	
	return 0;
	
}




