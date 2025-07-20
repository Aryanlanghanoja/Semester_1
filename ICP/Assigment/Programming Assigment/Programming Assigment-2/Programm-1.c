#include<stdio.h>
#include<conio.h>

int main()
{
	int n,sum=0,fact;
	
	printf("Enter The Value of N:-");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		fact=1;
		
		for(int j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		
		sum=sum+fact;
	}
	
	printf("Addition of Factorial Till %d number Is %d",n,sum);
	
	return 0;
}