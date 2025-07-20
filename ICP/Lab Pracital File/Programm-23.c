#include<stdio.h>

int main()
{
	char s[15];
	int num,vovels=0;
	
	printf("Enter The String:-");
	gets(s);
	
	num=strlen(s);
	
	for(int i=0;i<num;i++)
	{
		if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
		{
			vovels++;
		}
	}
	
	printf("There Are %d Vovels In %s",vovels,s);
	
	return 0;
	
}