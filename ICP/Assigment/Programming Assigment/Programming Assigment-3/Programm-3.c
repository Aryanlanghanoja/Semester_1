#include<stdio.h>
#include<conio.h>

int main()
{
	int a[3][3],b[3][3];
	
	printf("Enter The Value For Matrix-A:-\n");
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("a[%d][%d]:-",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter The Value For Matrix-B:-\n");
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("b[%d][%d]:-",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("The Addition of Matrix A & B =\n");
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",a[i][j] + b[i][j]);
		}
		printf("\n");
	}
}