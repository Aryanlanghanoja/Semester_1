#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	
	printf("Enter How Many Numbers You Want to Add:-");
	scanf("%d",&n);
	
	int a[n],sum=0,i,avg=0;
	
	for(i=0;i<n;i++)
	{
		printf("Enter The Element a[%d]:-",i);
		scanf("%d",&a[i]);
		
		sum =sum + a[i];
	}
	
	avg=sum/n;
	
	printf("The Average Of All Entered Number Is %d",avg);
	
	
	
	return 0;
	
}