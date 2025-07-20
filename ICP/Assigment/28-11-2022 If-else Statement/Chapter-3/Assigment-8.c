#include<stdio.h>

int main(void)
{
	int num,absolute_num;
	
	printf("Enter A Number:-");
	scanf("%d",&num);
	
	if(num>=0)
	{
		absolute_num=num*1;
	}
	else
	{
		absolute_num=num*(-1);
	}
	
	printf("The Absolute Value of %d is %d",num,absolute_num);

    return 0;
}




