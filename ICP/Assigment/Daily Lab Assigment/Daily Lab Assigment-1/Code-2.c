#include<stdio.h>

int main(void)
{
	double  principle_value,rate_of_interset,simple_interest;
	float time_period;
	
	printf("Enter Your Principle Value:-");
	scanf("%lf",&principle_value);
	
	printf("Enter Your Rate Of Interest:-");
	scanf("%lf",& rate_of_interset);
	
	printf("Enter Your Time Period:-");
	scanf("%f",&time_period);
	
	simple_interest = ( principle_value * rate_of_interset * time_period ) /100 ;
	
	printf("Principle Value =  Rs %.2lf /-\n",principle_value);
	printf("Rate Of Interest = %.2f Percent \n",rate_of_interset);
	printf("Time period = %.2f Years \n",time_period);
	printf("Simple Interest = Rs %.2lf /-",simple_interest);
	
	return 0;
}
