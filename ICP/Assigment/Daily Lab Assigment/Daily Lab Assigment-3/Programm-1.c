#include<stdio.h>

int main()
{
	char string[50];
	int vovel=0,constant=0;
	
	printf("ENter A String:-");
	gets(string);
	
	for(int i=0;i<50;i++)
	{
		if(string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' ||  string[i]=='U' || string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u')
		{
			vovel++;
		}
		
		else if(string[i] == NULL)
		{
			break;
		}
		
		else
		{
			constant++;
		}
	}
	
	printf("There are %d Vovels and %d Constant",vovel,constant);
	
	return 0;
}
 
 
 
 
 
 
 
 