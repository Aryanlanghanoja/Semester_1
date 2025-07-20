#include<stdio.h>

int main(void)
{
	int m,n,i,j;
	
	printf("Enter The Starting Point:-");
	scanf("%d",&m);
	
	printf("Enter The Ending Point:-");
	scanf("%d",&n);
	
	for(i=m;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(i==j)
		{
			printf("%d\n",i);
		}
	}
	
	return 0;
}