#include<stdio.h>
int main(void)
{
	float num;
	printf("Enter A Number:-");
	scanf("%f",&num);
	if(num>0)
	{
		printf("%.2f Is Positive",num);
	}
	else if(num<0)
	{
		printf("%.2f Is Negative",num);
	}
	else
	{
		printf("Entered Number Is Zero");
	}
	return 0;
}