#include<stdio.h>

int main()
{
	int base_salary;
	
	printf("Enter Your Base Salary:-");
	scanf("%d",&base_salary);
	
	printf("Your Base salary Is %d\n",base_salary);
	printf("Your Dearness Allowance Is %.2f\n",0.5*base_salary);
	printf("Your House Rent Allowance Is %.2f\n",0.1*base_salary);
	printf("\n\n\n");
	printf("Your Total Salary Is %.2f\n",1.6*base_salary);
	
	return 0;
	
}