#include<stdio.h>

int square (int a)
{
	int ans;
	ans= a*a;
	return ans;
}

int main()
{
	int a;
	
	printf("Enter The Number:-");
	scanf("%d",&a);
	
	printf("The Square Of %d Is %d",a,square(a));
	
	return 0;
	
}