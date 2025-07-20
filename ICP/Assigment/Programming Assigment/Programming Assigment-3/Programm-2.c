#include<stdio.h>
#include<conio.h>

int main()
{
	int a[2][2];
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Enter The Numbers at a[%d][%d]:-",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
	
}