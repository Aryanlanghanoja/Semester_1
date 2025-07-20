#include<stdio.h>

int main()
{
	double base,height,area;
	
	printf("Enter The Height Of Triangle:-");
	scanf("%lf",&height);
	
	printf("Enter The Base Of Triangle:-");
	scanf("%lf",&base);
	
	area=0.5*base*height;
	
	printf("The Area OF Triangle Is %.2lf sqm",area);
	
	return 0;
	
}