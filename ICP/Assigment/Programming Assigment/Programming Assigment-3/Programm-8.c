#include<stdio.h>
#include<conio.h>

int main()
{
	char s1[15],s2[15];
	
	printf("Enter String-1:-");
	gets(s1);
	
	printf("Enter String-2:-");
	gets(s2);
	
	strcat(s1,s2);
	
	printf("Concade Is %s",s1);
	
	return 0;
}