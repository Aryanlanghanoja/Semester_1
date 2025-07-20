#include<stdio.h>

int main(void)
{
	int Ram_Age,Shyam_Age,Ajay_Age;
	
	printf("Enter A Ram's Age:-");
	scanf("%d",&Ram_Age);
	
	printf("Enter A Shyam's Age:-");
	scanf("%d",&Shyam_Age);
	
	printf("Enter A Ajay's Age:-");
	scanf("%d",&Ajay_Age);
	
	if(Ram_Age<Shyam_Age)
	{
		if(Ram_Age<Ajay_Age)	
		{
			printf("Ram Is Youngest");
		}
		else
		{
			printf("Ajay Is Youngest");
		}
	}
	
	else 
	{
		if(Shyam_Age<Ajay_Age)
		{
			printf("Shyam Is Youngest");
		}
		
		else 
		{
			printf("Shyam Is Youngest");
		}
	}
	return 0;
}












