//Write Down A Programm in c to convert decimal number to binary number

#include<stdio.h>

void binary(int num)
{	
	int new_num,ans,a[15],i=0;
	
	new_num=num;
	
	while(num!=0)
	{
		ans=num%2;
		num=num/2;
		a[i]=ans;
		i++;
	}
	
	printf("The Binary Number Of %d Is ",new_num);
	for(int j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
}

int main()
{
	int num;
	
	printf("Enter A Number:-");
	scanf("%d",&num);
	
	binary(num);
	
	return 0;
	
}