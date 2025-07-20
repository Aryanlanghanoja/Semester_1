#include<stdio.h>

int main()
{
	int sum=0,n;
	
	printf("Press 0 To Exit\n");
	
	for(int i=1;i<=100;i++)
	{
		printf("Enter The Number:-");
		scanf("%d",&n);
		
		if(n==0)
		{
			printf("PROGRAMM ENDS\n");
			goto end;
		}
		
		else
		{
			sum=sum+n;
		}
	}
	
	end:
	printf("The Addition Of All Numbers That You Entered Is %d",sum);
}