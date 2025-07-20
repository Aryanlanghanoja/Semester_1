#include<stdio.h>

struct student
{
	int roll_no;
	char name[30];
	int m1;
	int m2;
	int m3;
	
}details;

int main()
{
	
	int sum=0,avg=0;
	
	printf("Enter The Name Of The Student:-");
	scanf("%s",&details.name);
	
	printf("Enter The Roll-no Of The Student:-");
	scanf("%d",&details.roll_no);
	
	printf("Enter The Marks-1:-");
	scanf("%d",&details.m1);
	
	printf("Enter The Marks-2:-");
	scanf("%d",&details.m2);
	
	printf("Enter The Marks-3:-");
	scanf("%d",&details.m3);
	
	sum=details.m1 + details.m2 + details.m3 ;
	
	printf("\n\n");
	
	printf("Name:- %s\n",details.name);
	printf("Roll-no:-%d\n",details.roll_no);
	printf("Marks-1:-%d\n",details.m1);
	printf("Marks-2:-%d\n",details.m2);
	printf("Marks-3:-%d\n",details.m3);
	
	avg=sum/3;
	
	if(avg>=90)
	{
		printf("Grade-A");
	}
	
	else if(avg>=80 && avg<90)
	{
		printf("Grade-B");
	}
	
	else if(avg>=70 && avg<80)
	{
		printf("Grade-C");
	}
	
	else if(avg>=50 && avg<60)
	{
		printf("Grade-D");
	}
	
	else if(avg>=40 && avg<50)
	{
		printf("Grade-E");
	}
	
	else if(avg>=33 && avg<40)
	{
		printf("Grade-F");
	}
	
	else
	{
		printf("FAIL");
	}
}