#include<stdio.h>
#include<conio.h>

int main()
{
	int *p,a[10],sum=0;
	p=a;
	
	printf("Enter The Elements of Array:-");
	
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+*p;
		p++;
	}
	
	printf("The Sum Is %d",sum);
	
}