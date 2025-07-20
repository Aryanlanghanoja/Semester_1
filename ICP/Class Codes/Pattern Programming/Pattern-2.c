#include<stdio.h>

int main(void)
{
	int n,i,j;
	
	printf("ENter A Number:-");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}