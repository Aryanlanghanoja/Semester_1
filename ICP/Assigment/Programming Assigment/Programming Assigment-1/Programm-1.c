#include<stdio.h>
#include<conio.h>

int main()
{
	double rupee,dollar;
	
	printf("Enter Your Amount In Rupee:-");
	scanf("%lf",&rupee);
	
	dollar=0.012*rupee;
	
	printf("INR %.2lf = $%.2lf",rupee,dollar);
	
	return 0;
}