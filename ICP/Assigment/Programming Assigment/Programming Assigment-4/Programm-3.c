#include<stdio.h>
#include<string.h>

double avgn (int a1,int a2,int a3,int a4,int a5)
{
	double avg;
	avg= (a1+a2+a3+a4+a5)/5;
	return avg;
}

int main()
{
	int a[5];
	float avg;
	
	for(int i=0;i<5;i++)
	{
		printf("Enter The Element at Index-%d:-",i+1);
		scanf("%d",&a[i]);
	}
	
	avg=avgn(a[0],a[1],a[2],a[3],a[4]);
	
	printf("The Average Is %.2f\n",avg);
	
	return 0; 
	
}