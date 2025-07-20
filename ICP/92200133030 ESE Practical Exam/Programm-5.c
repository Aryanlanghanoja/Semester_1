// Write Down a Programm To Impliment any three String Functions

#include<stdio.h>
#include<string.h>

int main()
{
	char s1[20],s2[20];
	
	printf("Enter The First String:-");
	gets(s1);
	
	printf("Enter The Second String:-");
	gets(s2);
	
	printf("The First String s1 Is %s\n",s1);
	printf("The Second String s2 Is %s\n",s2);
	
	printf("The Length Of First String Is %d\n",strlen(s1));
	printf("The Length Of Second String Is %d\n",strlen(s2));
	
	printf("The Result Of strlwr(s1) Is %s\n",strlwr(s1));
	printf("The Result Of strlwr(s2) Is %s\n",strlwr(s2));
	
	printf("The Result Of strupr(s1) Is %s\n",strupr(s1));
	printf("The Result Of strupr(s1) Is %s\n",strupr(s2));
	
	printf("The Result Of strcmp(s1,s2) Is %d\n",strcmp(s1,s2));
	printf("The Result Of strcat(s1,s2) Is %s\n",strcat(s1,s2));
	
	strcpy(s1,s2);
	printf("The Result Of strcpy(s1,s2) is %s\n",s1);
	
	return 0;
	
}