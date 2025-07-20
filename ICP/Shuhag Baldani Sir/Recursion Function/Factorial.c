#include<stdio.h>
#include<conio.h>

int fact(int num);
int main()
{
	int num;
	
	printf("Enter A Number:-");
	scanf("%d",&num);
	
	printf("%d ! = %d",num,fact(num));
	
	return 0;
}

int fact(int num)
{
	int ans;
	 
	if(num==1 || num==0)
	{
		ans=1;
	}
	
	else
	{
		ans=num*fact(num-1);
	}
	
	return ans;
}