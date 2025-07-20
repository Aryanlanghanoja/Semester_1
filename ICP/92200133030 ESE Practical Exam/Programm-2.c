// write down a program to implement 2D matrix having 5 rows and 6 coloumns.

#include<stdio.h>

int main()
{
	int a[5][6];
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<6;j++)
		{
			printf("Entre The Value Of a[%d][%d]:-",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("YOur Matrix Is:-\n");
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<6;j++)
		{
			printf("%d\t",a[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
 } 