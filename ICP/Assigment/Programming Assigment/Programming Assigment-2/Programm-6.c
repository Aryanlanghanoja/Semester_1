#include<stdio.h>
#include<conio.h>

int main()
{
	char gender;
	int age;
	
	printf("Enter Your Gender:-");
	scanf("%c",&gender);
	
	fflush(stdin);
	
	printf("Enter Your Age:-");
	scanf("%d",&age);
	
	if(age>=24 && (gender=='F'  || gender=='f'))
	{
		printf("Person Is Employed");
	}
	
	else if(age>=28 && (gender=='M' || gender=='m'))
	{
		printf("Person Is Employed");
	}
	
	else
	{
		printf("Person Is Not Employed");
	}
}