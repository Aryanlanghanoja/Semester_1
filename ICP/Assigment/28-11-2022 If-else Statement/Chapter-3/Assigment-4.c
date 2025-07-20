#include<stdio.h>

int main(void)
{
	int year,last_digit,day;
	
	printf("Enter A Year:-");
	scanf("%d",&year);
	
	last_digit=year%10;
	day=last_digit%7;
	
	if(day==1)
	{
		printf("On 1st January %d , It Is Monday",year);
	}
	
	else if(day==2)
	{
		printf("On 1st January %d , It Is Tuesday",year);
	} 
	
	else if(day==3)
	{
		printf("On 1st January %d , It Is Wednesday",year);
	} 
	
	else if(day==4)
	{
		printf("On 1st January %d , It Is Thursday",year);
	} 
	
	else if(day==5)
	{
		printf("On 1st January %d , It Is Friday",year);
	} 
	
	else if(day==6)
	{
		printf("On 1st January %d , It Is Saturday",year);
	} 
	
	else
	{
		printf("On 1st January %d , It Is Sunday",year);
	} 
	
	return 0;
}


