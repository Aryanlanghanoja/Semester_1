#include<stdio.h>

int main(void)
{
	int number;
	
	printf("Enter A Number:-");
	scanf("%d",&number);
	
	if(number%2==0)
	{
		printf("%d Is A Even Number",number);
	}
	
	else
	{
		printf("%d Is A Odd Number",number);
	}
	
	return 0;
}








