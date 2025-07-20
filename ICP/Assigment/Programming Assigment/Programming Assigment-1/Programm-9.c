#include<stdio.h>
#include<conio.h>

int main()
{
	double base,height,area;
	
	printf("Enter The Base of Traingle:-");
	scanf("%lf",&base);
	
	printf("Enter The Height of Traingle:-");
	scanf("%lf",&height);
	
	area=0.5*base*height;
	
	printf("The Area of Right-Angle Triangle is %.2lf",area);
	
	return 0;
}