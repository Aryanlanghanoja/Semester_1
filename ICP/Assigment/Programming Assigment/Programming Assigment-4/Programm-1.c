#include<stdio.h>

void ASSCI (char a)
{
	printf("The ASSCI Value of %c Is %d",a,a);
}

int main()
{
	char a;
	
	printf("Enter A Character:-");
	scanf("%c",&a);
	
	ASSCI(a);
	
	return 0; 
	
}