#include<stdio.h>
#include<conio.h>

int main()
{
	double k,a,x;
	
	printf("Enter The Value Of k:-");
	scanf("%lf",&k);
	
	printf("Enter The Value Of a:-");
	scanf("%lf",&a);
	
	x=((k-4)*(a*4))/100 ;
	
	printf("Value Of x Is %.2lf",x);
	
	return 0;
}