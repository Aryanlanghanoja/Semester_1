#include<stdio.h>

struct time_day
{
	int hour;
	int minute;
	int second;
}time;

int main()
{
	printf("Enter The Hours:-");
	scanf("%d",&time.hour);
	
	printf("Enter The Minutes:-");
	scanf("%d",&time.minute);
	
	printf("Enter The Seconds:-");
	scanf("%d",&time.second);
	
	printf("\nTime %d:%d:%d",time.hour%24,time.minute%60,time.second%60);
	
	getch();
	
}