#include<stdio.h>

int main(void)
{
	int a=2,b=3,c=4;
	for(int i=0;i<=5;i++)
	{
		printf("%d\n",a);
		if(b==3)
		{
			continue;
			printf("%d\n",b);
		}
	}
	return 0;
}


