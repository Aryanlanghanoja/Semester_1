#include<stdio.h>
#include<conio.h>

int main()
{
	float centigrade,Fahrenheit;
	
	printf("Enter The Temperature In Centigrade:-");
	scanf("%f",&centigrade);
	
	Fahrenheit  = 1.8 * (centigrade) + 32 ;
	
	printf("The Temperature In Fahrenheit Is %.2f",Fahrenheit);
	
	return 0;
}