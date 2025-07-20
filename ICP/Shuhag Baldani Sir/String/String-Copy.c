#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char s1[15],s2[15];
	
	printf("Enter The String-1:-");
	gets(s1);
	
	printf("Enter The String-2:-");
	gets(s2);
	
	strcpy(s1,s2);
	
	printf("New String-1 :- %s",s1);
    
    getch();
//    return 0;
}