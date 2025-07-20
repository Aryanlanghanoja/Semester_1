#include<stdio.h>
int main(void)
{
	int a,b,c,n=0;
	printf("Enter The Number-1:-");
	scanf("%d",&a);
	printf("Enter The Number-2:-");
	scanf("%d",&b);
//	printf("Enter The Number-3:-");
//	scanf("%d",&c);
	n=a;
	a=b;
	b=n;
	
	printf("The Number-1 Is %d\n",a);
	printf("The Number-2 Is %d",b);
}