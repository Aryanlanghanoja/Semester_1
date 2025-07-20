#include<stdio.h>

struct cricket
{
	char name[15];
	char team[15];
	float average;
}player[50];

int main()
{
	int n=50;
	for(int i=0;i<50;i++)
	{
		printf("Enter The Details Of Player-%d\n",i+1);
		
		printf("Player's Name:-");
		scanf("%s",&player[i].name);
		
		printf("Player's Team:-");
		scanf("%s",&player[i].team);
		
		printf("Player's Batting Average:-");
		scanf("%f",&player[i].average);
	}
	
	for(int i=0;i<n-1;)
}