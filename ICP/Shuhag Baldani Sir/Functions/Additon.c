#include<stdio.h>
#include<conio.h>

double sum(double a,double b)
{
	double c;
	c=a+b;
	
	return (c);
}

int main()
{
	double num1,num2;
	
	printf("Enter The Number-1:-");
	scanf("%lf",&num1);
	
	printf("Enter The Number-2:-");
	scanf("%lf",&num2);
	
	double add=sum(num1,num2);
	
	printf("The Addition Is %.2lf",add);
	
	return 0;
}


