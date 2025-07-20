#include<stdio.h>

struct date
{
	int date;
	int month;
	int year;
}dates[2];

int main()
{
	for(int i=0;i<2;i++)
	{
		printf("Enter The Date-%d:-",i+1);
		scanf("%d",&dates[i].date);
		
		printf("Enter The Month-%d:-",i+1);
		scanf("%d",&dates[i].month);
		
		printf("Enter The Year-%d:-",i+1);
		scanf("%d",&dates[i].year);
	}
	
	if(dates[0].date==dates[1].date && dates[0].month==dates[1].month && dates[0].year==dates[1].year)
	{
		printf("Dates are Equal");
	}
	
	else
	{
		printf("Dates are Not Equal");
	}
	
	return 0;
	
}