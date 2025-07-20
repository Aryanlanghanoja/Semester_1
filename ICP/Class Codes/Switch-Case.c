#include<stdio.h>
int main(void)
{
	int a,b;
	char o;
	printf("Enter The Operation:-");
	scanf("%c",&o);
	printf("Enter a Number-1:-");
	scanf("%d",&a);
	printf("Enter a Number-2:-");
	scanf("%d",&b);
	switch(o)
	{
		case '+':
		printf("The Addition Is %d",a+b);
		break;
		case '-':
		printf("The Substraction Is %d",a-b);
		break;
		case '*':
		printf("The Multiplication Is %d",a*b);
		break;
		case '/':
		printf("The Division Is %d",a/b);
		break;
		default:
		printf("Choose Valid Operation");
		break;
	}
	return 0;
}