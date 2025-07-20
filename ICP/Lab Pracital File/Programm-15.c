#include<stdio.h>

int main()
{
	int a,b,c,max;
	
	printf("Enter The Number-1:-");
	scanf("%d",&a);
	
	printf("Enter The Number-2:-");
	scanf("%d",&b);
	
	printf("Enter The Number-3:-");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			max=a;
		}
		
		else
		{
			max=c;
		}
	}
	
	else
	{
		if(b>c)
		{
			max=b;
		}
		
		else
		{
			max=c;
		}
	}
	
	printf("The Maximum Number Amongst %d %d %d is %d",a,b,c,max);
	
	return 0;
	
}