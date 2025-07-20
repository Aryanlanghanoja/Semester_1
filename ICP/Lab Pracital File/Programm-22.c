#include<stdio.h>

int main()
{
	int a[5],max,min;
	
	for(int i=0;i<5;i++)
	{
		printf("Enter The Value at Index-%d:-",i+1);
		scanf("%d",&a[i]);
	}
	
	max=a[0];
	min=a[0];
	
	for(int i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	printf("The Maximum Number In Array %d\n",max);
	
	for(int i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	
	printf("The Minmum Number In Array %d\n",min);
	
	return 0;
	
}