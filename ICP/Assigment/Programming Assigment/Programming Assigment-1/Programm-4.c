#include<stdio.h>
#include<conio.h>

int main()
{
	int num;
	
	printf("Enter The Number:-");
	scanf("%d",&num);
	
	printf("Left-Shift By 3 is %d\n",num<<3);
	printf("Right-Shift By 3 is %d",num>>3);
	
	return 0;
}