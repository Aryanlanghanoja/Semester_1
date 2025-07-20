#include<stdio.h>

int main()
{
	char operation;
	int a,b;
	
	printf("Enter The Operation:-");
	scanf("%c",&operation);
	
	printf("Enter The Value Of a:-");
	scanf("%d",&a);
	
	printf("Enter The Value Of b:-");
	scanf("%d",&b);
	
	switch(operation)
	{
		case '+' :
		{
			printf("The Addition Is %d",a+b);
			break;
		}
		
		case '-' :
		{
			printf("The Substraction Is %d",a-b);
			break;
		}
		
		case '*' :	
		{
			printf("The Multiplication Is %d",a*b);
			break;
		}
		
		case '/' :
		{
			printf("The Multiplication Is %d",a/b);
			break;	
		}
		
		case '%' :
		{
			printf("The Modulo Is %d",a%b);
			break;	
		}
		
		default :
		{
			printf("Choose Valid Operation");
			break;
		}
	}
}