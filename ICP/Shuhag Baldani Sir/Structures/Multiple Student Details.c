#include<stdio.h>

struct student_record
{
	char name[15];
	char branch[15];
	int marks;
	char grade[10];
}student[10];

int main()
{
	for(int i=0;i<2;i++)
	{
		
		printf("Enter The Details Of Student-%d:-\n",i+1);
		printf("Name:-");
		scanf("%s",&student[i].name);
		
		printf("Branch:-");
		scanf("%s",&student[i].branch);
		
		printf("Total Marks:-");
		scanf("%d",&student[i].marks);
		
	}
	
	for(int i=0;i<2;i++)
	{
		printf("Details Of Student-%d\n",i+1);
		printf("Name:-%s\n",student[i].name);
		printf("Branch:-%s\n",student[i].branch);
		printf("Total-Marks:-%d\n",student[i].marks);
		
		if(student[i].marks>75)
		{
			"Grade:-Distinction";
		}
		
		else if(student[i].marks>65)
		{
			"Grade:-First-Class";
		}
		
		else if(student[i].marks>55)
		{
			"Grade:-Second-Class";
		}
		
		else if(student[i].marks>33)
		{
			"Grade:-Third-Class";
		}
		
		else
		{
			"Grade:-Fail";
		}
	}
	
	getch();
}