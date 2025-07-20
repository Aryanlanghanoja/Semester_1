#include<stdio.h>

int main()
{
	int num,sum=0;
	
	for(int i=1;i<=3;i++)
	{
		printf("Enter The Number-%d:-",i);
		scanf("%d",&num);
		
		sum=sum+num;
	}
	
	printf("The Sum Of All Three Numbers are %d\n",sum);
	printf("The Average Of All Three Numbers are %d\n",sum/3);
	
	return 0;
	
}