#include<stdio.h>

struct student_details
{
	char name[30];
	int marks;
	int no;
};

int main()
{
	int n;
	
	printf("Enter The Number Of Student:-");
	scanf("%d",&n);
	
	struct student_details student[n];
	
	for(int i=0;i<n;i++)
	{
		printf("Enter The Name Of Student-%d:-",i+1);
		scanf("%s",&student[i].name);
		fflush(stdin);
		
		printf("Enter The Marks Of Student-%d:-",i+1);
		scanf("%d",&student[i].marks);
		
		printf("Enter The Roll-no Of Student-%d:-",i+1);
		scanf("%d",&student[i].no);
		
	}
	
	for(int i=0;i<n;i++)
	{
		printf("\n\n\n");
		printf("The Name Of Student-%d:- %s\n",i+1,student[i].name);
		printf("The Marks Of Student-%d:-%d\n",i+1,student[i].marks);
		printf("The Roll-no Of Student-%d:-%d\n",i+1,student[i].no);
		
	}
}