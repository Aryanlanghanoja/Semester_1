#include<stdio.h>

void evenodd(int a)
{
	if(a%2==0)
	{
		printf("%d Is A Even Number",a); 
	}
	
	else
	{
		printf("%d Is A Odd Number",a); 
	}
}

int main()
{
	int a;
	
	printf("Enter A Number:-");
	scanf("%d",&a);
	
	evenodd(a);
	
	return 0;
	
}