#include<stdio.h>

int prime(int num)
{
	int i;
	
	for(i=2;i<num;i++)
	{	
		if(num%i==0)
		{
			break;
		}
	}
	
	if(num==i)
	{
		return 1;
	}
	
	else
	{
		return 0;
	}
}

int main()
{
	int num,primen;
	
	printf("Enter The Number:-");
	scanf("%d",&num);
	
	primen=prime(num);
	
	if(primen==1)
	{
		printf("%d Is A Prime Number",num);
	}
	
	else
	{
		printf("%d Is Not A Prime Number",num);
	}
	
	return 0;
}