#include<stdio.h>

int main(void)
{
	int angle_A,angle_B,angle_C;
	
	printf("Enter A Value Of Angle-A:-");
	scanf("%d",&angle_A);
	
	printf("Enter A Value Of Angle-B:-");
	scanf("%d",&angle_B);
	
	printf("Enter A Value Of Angle-C:-");
	scanf("%d",&angle_C);
	
	if(angle_A+angle_B+angle_C == 180)
	{
		printf("Triangle Is Valid");
	}
	else
	{
		printf("Triangle Is In-valid");
	}
	return 0;
}




