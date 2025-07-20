#include<stdio.h>

int cube(int x)
{
	int z;
	z = x*x*x;
	return z;
}

int main(void)
{
	int a;
	
	printf("Enter A Number:-");
	scanf("%d",&a);
	int b=cube(a);
	printf("Cube Is %d",b);
	return 0;
}