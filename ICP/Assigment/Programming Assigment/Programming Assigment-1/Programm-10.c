#include<stdio.h>
#include<conio.h>

int main()
{
	int num;
	
	printf("Enter The Number:-");
	scanf("%d",&num);
	
	num%2==0 ? printf("%d Is A Even Number",num):printf("%d Is A Odd Number",num);
	
	return 0; 
}