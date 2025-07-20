#include<stdio.h>
#include<conio.h>

struct student
{
	char name[50];
	char surname[50];
	int roll_no;
	char branch[15];
};

int main()
{
	struct student student_id;
	
	printf("Enter The Name of the Student:-");
	gets(student_id.name);
	
	printf("Enter The Surname Of The Student:-");
	gets(student_id.surname);
	
	printf("Enter The Branch Of The Student:-");
	gets(student_id.branch);
	
	printf("Enter The Roll No of the Student:-");
	scanf("%d",&student_id.roll_no);
	
	printf("Name:-%s\n",student_id.name);
	printf("Surname:-%s\n",student_id.surname);
	printf("Branch:-%s\n",student_id.branch);
	printf("Roll-No:-%d\n",student_id.roll_no);
	
	getch();
	
}