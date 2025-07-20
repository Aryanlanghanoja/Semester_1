#include<stdio.h>
#include<conio.h>

int main()
{
	int v,s,l,m,t;
	
	printf("Enter The Value Of v:-");
	scanf("%d",&v);
	
	printf("Enter The Value Of s:-");
	scanf("%d",&s);
	
	printf("Enter The Value Of l:-");
	scanf("%d",&l);
	
	printf("Enter The Value Of m:-");
	scanf("%d",&m);
	
	t=((v+s)+(l-m)*l);
	
	printf("The Value Of t is %d",t);
	
	return 0;
}