#include<stdio.h>
int main(void)
{
	int a,b,c,min=0,max=0;
	printf("Enter A NUmber-1:-");
	scanf("%d",&a);
	printf("Enter A NUmber-2:-");
	scanf("%d",&b);
	printf("Enter A NUmber-3:-");
	scanf("%d",&c);
	if(a>b && b>c)
	{
		max=a;
	}
	else if(b>c)
	{
		max=b;
	}
	else
	{
		max=c;
	}
	if(a<b && a<c)
	{
		min=a;
	}
	else if(b<c)
	{
		min=b;
	}
	else 
	{
		min=c;
	}
	printf("The Greatest Number Is %d\n",max);
	printf("The Smallest Number Is %d",min);
	return 0;
}