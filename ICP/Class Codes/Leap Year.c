#include<stdio.h>
int main()
{
	int year;
	printf("Enter the Year:-");
	scanf("%d",&year);
	if(year%100!=0 && year%4==0)
	{
		printf("%d Is A Leap Year",year);
	}
	else if(year%400==0)
	{
		printf("%d Is A Leap Year",year);
	}
	else
	{
		printf("%d Is Not Leap Year",year);
	}
	return 0;
}