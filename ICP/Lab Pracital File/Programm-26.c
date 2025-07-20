#include<stdio.h>

struct employee_detail
{
	char first_name[10];
	char last_name[10];
	char city[15];
	int salary;
};

int main()
{
	int n;
	
	printf("Enter The Number Of Employee:-");
	scanf("%d",&n);
	
	struct employee_detail employee[n];
	
	for(int i=0;i<n;i++)
	{
		printf("Enter The First Name Of Employee-%d:-",i+1);
		scanf("%s",&employee[i].first_name);
		
		printf("Enter The Last Name Of Employee-%d:-",i+1);
		scanf("%s",&employee[i].last_name);
		
		printf("Enter The City Of Employee-%d:-",i+1);
		scanf("%s",&employee[i].city);
		fflush(stdin);
		
		printf("Enter The Salary Of Employee-%d:-",i+1);
		scanf("%d",&employee[i].salary);
	}
	
	for(int i=0;i<n;i++)
	{
		printf("\n\n\n");
		printf("First Name:- %s\n",employee[i].first_name);
		printf("Last Name:- %s\n",employee[i].last_name);
		printf("City:-%s\n",employee[i].city);
		printf("Salary:-%d\n",employee[i].salary);
		
	}
	
	return 0;
	
}