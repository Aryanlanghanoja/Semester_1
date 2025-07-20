#include<stdio.h>

int main(void)
{
	int weight;
	
	printf("Enter The Weight Of Boxer:-");
	scanf("%d",&weight);
	
	if(weight<115)
	{
		printf("Boxer Class Is Flyweight");
	}
	
	else if(115<weight && weight<121)
	{
		printf("Boxer Class Is Bantamweight");
	}
	
	else if(122<weight && weight<153)
	{
		printf("Boxer Class Is Featherweight");
	}
	
	else if(154<weight && weight<189)
	{
		printf("Boxer Class Is Middleweight");
	}
	
	else if(weight >= 190)
	{
		printf("Boxer Class Is Heavyweight");
	}
	
	return 0;
}



