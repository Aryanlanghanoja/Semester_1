#include<stdio.h>

int main(void)
{
	int n,i,j,temp=1;
	
	printf("Enter A Number:-");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",temp);
			temp++;
		}
		printf("\n");
	}
	return 0;
}