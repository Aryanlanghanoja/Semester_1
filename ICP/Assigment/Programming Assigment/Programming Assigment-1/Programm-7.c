#include<stdio.h>
#include<conio.h>

int main()
{
	double a,b,c,s;
	
	printf("Enter The Value Of a:-");
	scanf("%lf",&a);
	
	printf("Enter The Value Of b:-");
	scanf("%lf",&b);
	
	printf("Enter The Value Of c:-");
	scanf("%lf",&c);
	
	s=((4*a+c)-2*a*b)/100 ;
	
	printf("The Value Of s is %.2lf",s);
	
	return 0;
}