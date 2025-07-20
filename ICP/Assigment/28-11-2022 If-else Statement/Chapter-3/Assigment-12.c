#include<stdio.h>
#include<math.h>

int main(void)
{
	int x,y;
	
	printf("Enter The Co-ordinates Of Point-A:-");
	scanf("%d %d",&x,&y);
	
	printf("Point-A = (%d , %d)\n",x,y);
	
	if(x==0 && y==0)
	{
		printf("Point-A Lies On Origin");
	}
	
	else if(x != 0)
	{
		printf("Point-A Lies On X-Axis");
	}
	
	else
	{
		printf("Point-A Lies On Y-Axis");
	}
	
	return 0;
}




