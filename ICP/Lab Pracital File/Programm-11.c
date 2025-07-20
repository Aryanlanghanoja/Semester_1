#include<stdio.h>

int main()
{
	int a,b;
	
	printf("Enter The Number-1:-");
	scanf("%d",&a);
	
	printf("Enter The Number-2:-");
	scanf("%d",&b);
	
	printf("The Bit-wise Or Operator Is %d\n",a|b);
	printf("The Bit-wise And Operator Is %d\n",a&b);
	printf("The Bit-wise xor Operator Is %d\n",a^b);
	
	return 0;
	
}