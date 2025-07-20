#include<stdio.h>

int main()
{
	int num,sum=0;
	
	printf("Enter The Value Of N:-");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++)
	{
		if(i%2 !=0)
		{
			sum=sum+i;
		}
	}
	
	printf("Addition Is %d",sum);
	
	return 0;
	
}