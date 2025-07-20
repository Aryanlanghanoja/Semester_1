#include<stdio.h>
int main(void)
{
	int n,i,fact=1;
	printf("Enter A NUmber To Get It's Factorial:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d ! = %d",n,fact);
	return 0;
}