#include<stdio.h>
#include<conio.h>

int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=5;j>=i;j--)
		{
			printf(" ");
		}
		
		for(int k=1;k<=i;k++)
		{
			printf(" ");
			printf("%d ",k);
		}
		
		printf("\n");
	}
	
	return 0;
	
}
