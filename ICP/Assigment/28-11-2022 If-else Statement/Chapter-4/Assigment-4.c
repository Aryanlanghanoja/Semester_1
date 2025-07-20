#include<stdio.h>

int main(void)
{
	int side1,side2,side3;
	
	printf("Enter The Length Side-1:-");
	scanf("%d",&side1);
	
	printf("Enter The Length Side-2:-");
	scanf("%d",&side2);
	
	printf("Enter The Length Side-3:-");
	scanf("%d",&side3);
	
	if(side1 == side2 == side3)
	{
		printf("Triangle Is Equilateral");
	}
	
	else if((side1 == side2) || (side2 == side3) || (side1 == side3))
	{
		printf("Triangle Is Isosceles");
	}
	
	else 
	{
		printf("Triangle Is Scalene");
	}
	
	return 0;
}




