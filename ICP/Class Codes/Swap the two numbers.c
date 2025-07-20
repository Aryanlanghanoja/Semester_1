#include<stdio.h>

int main(void)
{
	int a,b;
	
	printf("Enter The Value Of A:-");
	scanf("%d",&a);
	
	printf("Enter The Value Of B:-");
	scanf("%d",&b);
	
	printf("Before Swap\nA=%d\nB=%d\n",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After Swap\nA=%d\nB=%d\n",a,b);
	
	return 0;
}







