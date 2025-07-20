#include<stdio.h>

int main(void)
{
	int i,j,a[2][2],b[2][2];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter The Value At a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter The Value At b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("Matrix-A = \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Matrix-B = \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	printf("Addition Of MAtrix =\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j] + b[i][j]);
		}
		printf("\n");
	}
	
	printf("Substraction Of MAtrix = \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j] - b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}