#include<stdio.h>

int main()
{
	char marriage_status,gender;
	int age;
	
	printf("Enter Your Marriage Status:-");
	scanf("%c",&marriage_status);
	fflush(stdin);
	
	printf("Enter Your Gender:-");
	scanf("%c",&gender);
	fflush(stdin);
	
	printf("Enter Your Age:-");
	scanf("%d",&age);
	
	if(marriage_status=='M' || marriage_status=='m')
	{
		printf("Driver Is Insaured\n");
	}
	
	else
	{
		if((gender=='m' || gender=='M') && age>=30)
		{
			printf("Driver Is Insaured\n");
		}
		
		else if((gender=='f' || gender=='F') && age>=25)
		{
			printf("Driver Is Insaured\n");
		}
		
		else
		{
			printf("Driver Is Not Insaured\n");
		}
	}
	
	return 0;
}