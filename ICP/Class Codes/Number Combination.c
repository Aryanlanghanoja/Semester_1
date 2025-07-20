#include<stdio.h>

int main(void)
{
	int i,j,k,n;
	
/*	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=3;k++)
			{
				if(i!=j && i!=k  && j!=k )
				{
				n=(i*100)+(j*10)+k;
				printf("%d\n",n);
				}
			}
		}
	}*/
	
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=3;k++)
			{
				n=(i*100)+(j*10)+k;
				printf("%d\n",n);
			}
		}
	}
	return 0;
}