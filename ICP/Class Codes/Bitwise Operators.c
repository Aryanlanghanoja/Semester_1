#include<stdio.h>
#include<conio.h>

int minimum(int n,int k)
{
	int min;
	
	if(n<k)
	{
		min=n;
	}
	
	else
	{
		min=k;
	}
	
	return min;
}

int maximum(int n,int k)
{
	int max;
	
	if(n>k)
	{
		max=n;
	}
	
	else
	{
		max=k;
	}
	
	return max;
}


int main()
{
	int n,k,a,b,and_op,or_op,xor_op,and_max=0,or_max=0,xor_max=0,i,j;
	
	scanf("%d %d",&n,&k);
	
	a=minimum(n,k);
	b=maximum(n,k);
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			if(i<j)
			{
				and_op=i&j;
				or_op=i|j;
				xor_op=i^j;
			}
			
			if(and_op>and_max && and_op<a)
			{
				and_max=and_op;
			}
			
			if(or_op>or_max  && or_op<a)
			{
				or_max=or_op;
			}
			
			if(xor_op>xor_max && xor_op<a)
			{
				xor_max=xor_op;
			}
		}
	}
	
	printf("%d\n",and_max);
	printf("%d\n",or_max);
	printf("%d\n",xor_max);
	
	return 0;
}