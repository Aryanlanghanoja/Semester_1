#include<stdio.h>

int main(void)
{
	int n,i,j,temp=1;
	
	printf("Enter A Number:-");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=1;j--)
		{
			 
			printf("%d ",temp);
			temp++;
		}
		printf("\n");
	}
	
	return 0;
}


