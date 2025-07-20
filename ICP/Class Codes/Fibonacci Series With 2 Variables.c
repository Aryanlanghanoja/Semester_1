#include<stdio.h>

int main()
{
	int a=0,b=1,i=1;
	
	printf("%d ",a);
	printf("%d ",b);
	
	while(i<=8)
	{
		b=a+b;
		printf("%d ",b);
		a=b;
		i++;
	}
}