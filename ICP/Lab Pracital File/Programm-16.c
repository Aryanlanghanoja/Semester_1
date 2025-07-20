#include<stdio.h>

int main()
{
	int a,b,op;
	
	printf("Enter The First-Number:-");
	scanf("%d",&a);
	
	printf("Enter The Second-Number:-");
	scanf("%d",&b);
	
	printf("Enter The Operation:-");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
		{
			printf("The Addition Is %d",a+b);
			break;
		}
		
		case 2:
		{
			printf("The Substraction Is %d",a-b);
			break;
		}
		
		case 3:
		{
			printf("The Multiplication Is %d",a*b);
			break;
		}
		
		case 4:
		{
			printf("The Division Is %d",a/b);
			break;
		}
	}
}