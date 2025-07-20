#include<stdio.h>
#include<conio.h>

int main()
{
	char string[15],temp;
	
	printf("Enter A String:-");
	gets(string);
	
	printf("Enter The Word that You want To Delete:-");
	scanf("%c",&temp);
	
	for(int i=0;i<strlen(string);i++)
	{
		if(string[i] == temp)
		{
			continue;
		}
		
		else
		{
			printf("%c",string[i]);
		}
		
	}
	
	return 0;
}