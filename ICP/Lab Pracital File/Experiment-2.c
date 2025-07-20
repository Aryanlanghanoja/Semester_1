#include<stdio.h>
#include<conio.h>

int main()
{
	double p,r,n,i;
	
	printf("Enter The Principle Value:-");
	scanf("%lf",&p);
	
	printf("Enter The Rate Of Interest:-");
	scanf("%lf",&r);
	
	printf("Enter The Time Period:-");
	scanf("%lf",&n);
	
	i=p*r*n/100;
	
	printf("The Simple Interest is %.2lf",i);
	
	return 0;
	
}