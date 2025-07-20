#include<stdio.h>
#include<conio.h>

void swap (int a,int b)
{
	int temp;
	
	temp=a;
	a=b;
	b=temp;
	
	printf("Values Inside The Swap Function\n");
	printf("A=%d\nB=%d",a,b);
}
int main()
{
	int x,y;
	
	printf("Enter The Value Of X and Y:-");
	scanf("%d %d",&x,&y);
	
	swap(x,y);
	
	printf("\nValues Inside Main Body:-\n");
	printf("X=%d\nY=%d",x,y);
	
	return 0;
}