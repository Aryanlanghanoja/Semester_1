#include<stdio.h>

int main()
{
	int temp=1,n;
	
	printf("Enter The Number Of Rows:-");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",temp);
			temp++;
		}
		
		printf("\n");
	}
	
	return 0;
}