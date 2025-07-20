#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char s1[15];
	
	printf("Enter A String-1:-");
	gets(s1);
	
	strlwr(s1);
	
	puts(s1);
	
	getch();
}