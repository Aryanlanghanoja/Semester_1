#include<stdio.h>

int main()
{
	double num,cost;
	
	printf("Enter The Number Of Chairs:-");
	scanf("%lf",&num);
	
	printf("Enter The Total Cost:-");
	scanf("%lf",&cost);
	
	printf("The Cost Of One Chair Is %.2f",cost/num);
	
	return 0;
	
}