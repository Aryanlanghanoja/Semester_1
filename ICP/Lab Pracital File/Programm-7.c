#include<stdio.h>

int main()
{
	int num;
	
	printf("Enter A Number:-");
	scanf("%d",&num);
	
	(num%2==0) ? printf("%d Is A Even Number",num) : printf("%d Is A Odd Number",num) ;
	
	return 0;
	
}