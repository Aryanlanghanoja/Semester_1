#include<stdio.h>

int main()
{
	int k,a;
	float x;
	
	printf("Enter the Value of A:-");
	scanf("%d",&a);
	
	printf("Enter the Value of K:-");
	scanf("%d",&k);
	
	x=(((k-4)*(a*4))/100);
	
	printf("The Value Of X Is %f",x);
	
	return 0;
	
}
