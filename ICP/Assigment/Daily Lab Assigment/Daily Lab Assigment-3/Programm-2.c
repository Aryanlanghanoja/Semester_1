#include<stdio.h>

int main()
{
	int marks,fail=0;
	
	for(int i=1;i<=5;i++)
	{
		printf("Enter The Marks-%d:-",i);
		scanf("%d",&marks);
		
		if(marks<40)
		{
			fail++;
		}
	}
	
	if(fail==0)
	{
		printf("PASS");
	}
	
	else if(fail==1 || fail==2)
	{
		printf("ATKT");
	}
	
	else
	{
		printf("FAIL");
	}
	
	return 0;
}





