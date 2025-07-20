#include<stdio.h>
#define PI 3.14159

void area_perimeter(double *radius,double *area,double *perimeter)
{
	
	*area = PI * (*radius) * (*radius);
	*perimeter= 2*PI*(*radius);
	 
	printf("The Perimeter Of A Circle Is %lf\n",*perimeter);
	printf("The Area Of A Circle Is %lf\n",*area);
}

int main()
{
	double radius,area,perimeter;
	
	printf("Enter The Radius:-");
	scanf("%lf",&radius);
	
	area_perimeter(&radius,&area,&perimeter);
	
	return 0;
	
}