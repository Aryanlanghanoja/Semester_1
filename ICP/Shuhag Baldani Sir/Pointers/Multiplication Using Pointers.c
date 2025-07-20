#include<stdio.h>
#include<conio.h>

int main()
{
	int *p,a[10],mul=1;
	p=a;
	
	printf("Enter The Elements of Array:-");
	
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		mul=mul*(*p);
		p++;
	}
	
	printf("The Multiplication Is %d",mul);
	
}