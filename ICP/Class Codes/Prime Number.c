#include<stdio.h>

int main(void)
{
	int num,i;
	
	printf("Enter A Number:-");
	scanf("%d",&num);
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			break;
		}
	}
	
	if(num==i)
	{
		printf("%d Is A Prime Number",num);
	}
	
	else
	{
		printf("%d Is Not A Prime Number",num);
	}
	
	return 0;
}

