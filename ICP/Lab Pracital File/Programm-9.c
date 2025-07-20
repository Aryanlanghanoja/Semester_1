#include<stdio.h>

int main()
{
	int a,b;
	
	printf("Enter The First Value:-");
	scanf("%d",&a);
	
	printf("Enter The Second Value:-");
	scanf("%d",&b);
	
	printf("Or-Operator Is %d\n",a|=b);
	printf("And-Operator Is %d\n",a&=b);
	printf("Xor-Operator Is %d\n",a^=b);
	printf("Left Shift-Operator Is %d\n",a<<=b);
	printf("Right-Operator Is %d\n",a>>=b);
	
	return 0;
}