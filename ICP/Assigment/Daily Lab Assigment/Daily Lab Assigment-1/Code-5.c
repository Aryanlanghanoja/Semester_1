#include<stdio.h>

int main(void)
{
	float number_1,number_2,float_multiplication ;
	double double_multiplication ;
	
	printf("Enter A Number-1:-");
	scanf("%f",&number_1);
	
	printf("Enter A Number-2:-");
	scanf("%f",&number_2);
	
	float_multiplication = number_1 * number_2 ;
	double_multiplication = number_1 * number_2 ;
	
	printf("Multiplication Of Flaot In Float Variable: = %f\n",float_multiplication);
	printf("Multiplication Of Float In Double Variable: = %f",double_multiplication);
	
	return 0;

}