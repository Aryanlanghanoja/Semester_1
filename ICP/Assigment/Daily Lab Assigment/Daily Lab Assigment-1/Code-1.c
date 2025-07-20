#include<stdio.h>
#define PI 3.14159

int main(void)
{
	double radius,area;
	
	printf("Enter A Radius Of Circle:-");
	scanf("%lf ", &radius);
	
	area= PI * radius * radius ;
	
	printf("Radius = %.2lf cm\n",radius);
	printf("Area Of Circle = %lf sqcm",area);
	
	return 0;
}
