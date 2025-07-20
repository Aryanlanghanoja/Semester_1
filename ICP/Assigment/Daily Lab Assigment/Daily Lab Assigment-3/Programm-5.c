#include<stdio.h>

int main()
{
	int num=0;
	
	for(int i=1;i<=20;i++)
	{
		if(i%2==0)
		{
			num++;
		}
		
	}
	
	printf("There Are %d Even Numbers in [1,20]",num);
	
	return 0;
	
}