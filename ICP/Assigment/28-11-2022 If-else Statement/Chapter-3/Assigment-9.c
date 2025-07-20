#include<stdio.h>

int main(void)
{
	int length,breadth,area,perimeter;
	
	printf("Enter The Length of Rectangle:-");
	scanf("%d",&length);
	
	printf("Enter The Breadth of Rectangle:-");
	scanf("%d",&breadth);
	
	area=length*breadth;
	perimeter=2*(length + breadth);
	
	printf("Area Of Rectangle is %d Sq.m\n",area);
	printf("Perimeter Of Rectangle is %d m\n",perimeter);
	
	if(area>perimeter)
	{
		printf("Area is Greater Than Perimeter");
	}
	
	else
	{
		printf("Perimeter is Greater Than Area");
	}
	
	return 0;
}




