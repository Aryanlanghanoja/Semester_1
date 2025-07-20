#include<stdio.h>
#define PI 3.14159

double  area_of_traingle (double length , double breadth)
{
	double area;
	area = 0.5*length*breadth;
	return area;
}

double area_of_circle(double radius)
{
	double area;
	area = PI *radius*radius;
	return area;
}

int main(void)
{
	double length,breadth,radius,circle,triangle;
	
	printf("Enter A Height Of A Triangle:-");
	scanf("%lf",&length);
	
	printf("Enter A Base Of A Triangle:-");
	scanf("%lf",&breadth);
	
	triangle = area_of_traingle(length,breadth);
	
	printf("Enter A Radius Of A Circle:-");
	scanf("%lf",&radius);
	
	circle = area_of_circle(radius);
	
	printf("Area Of Triangle Is %.2lf sqm\n",triangle);
	printf("Area Of Circle Is %.2lf sqm",circle);
	
}