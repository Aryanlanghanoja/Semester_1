#include<stdio.h>

int main()
{
	int n,i=1;
	
	printf("Enter The Number:-");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d \n",i);
		i++;
	}
	
	printf("\n\n");
	
	for(i=1;i<=n;i++)
	{
		printf("%d \n",i);
	}
	
	printf("\n\n");
	
	i=1;
	do
	{
		printf("%d \n",i);
		i++;
	}while(i<=n);
}