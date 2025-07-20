#include<stdio.h>
#include<conio.h>

int main()
{
	int sales;
	float commision;
	
	printf("Enter The Amount of Sales:-");
	scanf("%d",&sales);
	
	if(sales<=500)
	{
		commision=5*sales/100;
	}
	
	else if(sales>500 && sales<=2000)
	{
		commision = 35 + (sales-500)*10/100 + 25;
	}
	
	else if(sales>2000 && sales<=5000)
	{
		commision = 185 + (sales-2000)*12/100 + 185 ; 
	}
	
	else
	{
		commision= 730 + (sales-500)*12.5/100 ; 
	}
	
	printf("The Commision Is %.2f",commision);
	
	return 0;
}