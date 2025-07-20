#include<stdio.h>
#include<conio.h>

int main()
{
	int num,i=0,ans,new_num;
	
	printf("Enter A Number:-");
	scanf("%d",&num);
	
	new_num=num;
	
	while(num!=0)
	{
		ans=num%10;
		num=num/10;
		i++;
	}
	
	printf("There are %d Digits Present in %d",i,new_num);
	
	return 0;
	
}