#include<stdio.h>

double cube(int a)
{
	double cube_ans;
	cube_ans=a*a*a;
	return cube_ans;
}

double square(int b)
{
	double square_ans;
	square_ans= b*b;
	return square_ans;
}

int main()
{
	double num1,num2;
	
	printf("Enter The Number-1:-");
	scanf("%lf",&num1);
	
	printf("Enter The Number-2:-");
	scanf("%lf",&num2);
	
	printf("The Square Of Number-1 Is %.2lf\n",square(num1));
	printf("The Square Of Number-2 Is %.2lf\n",square(num2));
	printf("The Cube Of Number-1 Is %.2lf\n",cube(num1));
	printf("The Cube Of Number-1 Is %.2lf\n",cube(num2));
	
	return 0;
}