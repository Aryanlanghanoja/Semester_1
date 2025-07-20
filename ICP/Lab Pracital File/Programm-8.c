#include<stdio.h>

int main()
{
	int a,num;
	
	printf("Enter The Number:-");
	scanf("%d",&a);
	
	num=a;
	
	printf("Increment Is %d\n",a++);
	printf("Decrement Is %d\n",--num);
	
	return 0;
	
}