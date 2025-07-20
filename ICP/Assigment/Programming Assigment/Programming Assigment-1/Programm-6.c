#include<stdio.h>
#include<conio.h>

int main()
{
	double p,r,n,a;
	
	printf("Enter The Value Of p:-");
	scanf("%lf",&p);
	
	printf("Enter The Value of r:-");
	scanf("%lf",&r);
	
	printf("Enter The Value Of n:-");
	scanf("%lf",&n);
	
	a=p*(1+(r/100)/n)-p ;
	
	printf("Value Of p is %.2lf",a);
	
	return 0;
}