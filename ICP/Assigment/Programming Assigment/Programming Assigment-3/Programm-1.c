#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5];
	
	for(int i=0;i<5;i++)
	{
		printf("Enter The Number at Index-%d:-",i);
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	
	return 0;
}