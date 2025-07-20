#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	
	printf("Enter The Size Of Array:-");
	scanf("%d",&n);
	
	int a[n],i,max=0;

	for(i=0;i<n;i++)
	{
		printf("Enter A Number At a[%d]:-",i);
		scanf("%d",&a[i]);
		
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	printf("The Greatest Number In The Array Is %d",max);
	
	return 0;

}