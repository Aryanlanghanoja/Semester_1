#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	
	printf("Enter The Size Of Array:-");
	scanf("%d",&n);
	
	int a[n],i,min;
	min=a[0];

	for(i=0;i<n;i++)
	{
		printf("Enter A Number At a[%d]:-",i);
		scanf("%d",&a[i]);
		
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	
	printf("The Smallest Number In The Array Is %d",min);
	
	return 0;

}