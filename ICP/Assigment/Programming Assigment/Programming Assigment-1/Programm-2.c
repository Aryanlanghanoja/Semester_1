#include<stdio.h>
#include<conio.h>

int main()
{
	double a,b;
	
	printf("Enter The First Value:-");
	scanf("%lf",&a);
	
	printf("Enter The Second Value:-");
	scanf("%lf",&b);
	
	printf("Addtion Is %.2lf\n",a+b);
	printf("Substraction Is %.2lf\n",a-b);
	printf("Multiplication Is %.2lf\n",a*b);
	printf("Division Is %.2lf\n",a/b);
	
	return 0;
}