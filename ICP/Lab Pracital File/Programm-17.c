#include<stdio.h>

int main()
{
	int a,sum=0,avg=0;
	
	for(int i=1;i<=5;i++)
	{
		printf("Enter The Marks-%d:-",i);
		scanf("%d",&a);
		
		sum=sum+a;
	}
	
	avg=sum/5;
	
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
	
	else if(avg>=60 && avg<70)
	{
		printf("Grade-D");
	}
	
	else if(avg>=50 && avg<40)
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
	
	return 0;
	
}