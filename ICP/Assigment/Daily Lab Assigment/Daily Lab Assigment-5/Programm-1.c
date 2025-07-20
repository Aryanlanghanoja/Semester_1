#include<stdio.h>

int sum(int a, int b)
{
	return a+b;
}

int main()
{
	int a,b;
	
	printf("Enter The First Value:-");
	scanf("%d",&a);
	
	printf("Enter The Second Value:-");
	scanf("%d",&b);
	
	printf("The Addition of %d and %d is %d",a,b,sum(a,b));
	
	return 0;
	
}