#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,i=0;
	
	printf("Enter The First Value:-");
	scanf("%d",&a);
	
	printf("Enter The Second Value:-");
	scanf("%d",&b);
	
	if(a<b)
	{
	
	for(int j=a;j<=b;j++)
	{
		if(j%2==0)
		{
			i++;
		}
	}
	
	printf("There are %d Even Numbers in Range of [%d,%d]",i,a,b);
	
	}
	
	else
	{
		
	for(int j=b;j<=a;j++)
	{
		if(j%2==0)
		{
			i++;
		}
	}
	
	printf("There are %d Even Numbers in Range of [%d,%d]",i,b,a);
	
	}
	
	return 0;
}




