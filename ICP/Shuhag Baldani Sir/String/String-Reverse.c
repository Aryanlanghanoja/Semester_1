#include<stdio.h>
#include<conio.h>

int main()
{
	char s1[15];
	
	printf("Enter THe String-1:-");
	gets(s1);
	
	strrev(s1);
	
	printf("%s",s1);
}