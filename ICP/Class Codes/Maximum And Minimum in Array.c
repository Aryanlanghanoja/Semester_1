#include<stdio.h>

int main(void)
{
	double a[5],min=a[0],max=a[0];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Enter A Number In Array At Index-%d:-",i);
		scanf("%lf",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	
	printf("The Maximum Number In Array Is %.2lf\n",max);
	printf("The Minimum Number In Array Is %.2lf\n",min);
	
	return 0;
}