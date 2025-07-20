#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter How Many Numbers You WAnt to Add:-");
	scanf("%d",&n);
	
	int a[n],sum=0,i;
	
	for(i=0;i<n;i++)
	{
		printf("Enter The Element a[%d]:-",i);
		scanf("%d",&a[i]);
		
		sum =sum + a[i];
	}
	
	printf("The Addition Of All Entered Number Is %d",sum);
	
	return 0;
	
}