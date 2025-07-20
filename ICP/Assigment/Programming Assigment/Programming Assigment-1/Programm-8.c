#include<stdio.h>
#include<conio.h>

int main()
{
	int c,d,g,h;
	float l;
	
	printf("Enter The Value Of c:-");
	scanf("%d",&c);
	
	printf("Enter The Value Of d:-");
	scanf("%d",&d);
	
	printf("Enter The Value Of g:-");
	scanf("%d",&g);
	
	printf("Enter The Value Of h:-");
	scanf("%d",&h);
	
	l=(c+d)*(g+h) ;
	
	printf("The Value of l is %.2f",l);
	
	return 0;
	
}