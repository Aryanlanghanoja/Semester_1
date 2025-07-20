#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5],max=0,min=0;
	
	for(int i=0;i<5;i++)
	{
		printf("Enter The Number at a[%d]:-",i);
		scanf("%d",&a[i]);
	}
	
	max=a[0];
	
	for(int i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	printf("The Maximum Number In an Array Is %d\n",max);
	
	min=a[0];
	
	for(int i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	
	printf("The Minimum Number In an Array Is %d",min);
	
	return 0;
	
}