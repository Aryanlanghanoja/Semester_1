#include<stdio.h>
#include<math.h>

int main()
{
	double principle_amount,rate_of_interest,compound_interest;
	int no_of_years;
	
	printf("Enter Your Principle Amount:-");
	scanf("%lf",&principle_amount);
	
	printf("Enter Your Rate Of Interest:-");
	scanf("%lf",&rate_of_interest);
	
	printf("Enter The Number of Years:-");
	scanf("%d",&no_of_years);
	
	compound_interest=principle_amount*pow((1+(rate_of_interest/100)),no_of_years)-principle_amount;
	
	printf("The Compound Interest at %d Years Is %.2lf",no_of_years,compound_interest);
	
	return 0;
	
}