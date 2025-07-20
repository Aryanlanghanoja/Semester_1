#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char chat[15];
	int size;
	
	printf("Enter The String:-");
	gets(chat);
	printf("%s\n",chat);
	size=strlen(chat);
	printf("The Length Of The String Is %d",size);
    
    getch();
}