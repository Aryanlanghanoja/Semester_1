#include<stdio.h>
#include<math.h>

int main(void)
{
	int x1,y1,x2,y2,x3,y3,x12,y12,x23,y23,x13,y13;
	float d12,d23,d13;
	
	printf("Enter The Cordinates Of Point-1:-");
	scanf("%d %d",&x1,&y1);
	
	printf("Enter The Cordinates Of Point-2:-");
	scanf("%d %d",&x2,&y2);
	
	printf("Enter The Cordinates Of Point-3:-");
	scanf("%d %d",&x3,&y3);
	
	printf("Point-1 = (%d , %d)\n",x1,y1);
	printf("Point-2 = (%d , %d)\n",x2,y2);
	printf("Point-1 = (%d , %d)\n",x3,y3);
	
	x12=pow((x1-x2),2);
	y12=pow((y1-y2),2);
	x23=pow((x2-x3),2);
	y23=pow((y2-y3),2);
	x13=pow((x1-x3),2);
	y13=pow((y1-y3),2);
	
	d12=pow((x12 + y12),0.5);
	d23=pow((x23 + y23),0.5);
	d13=pow((x13 + y13),0.5);
	
	if(d13==(d12+d23) || d12==(d23 + d13) || d23==(d12 + d13))
	{
		printf("All Points Are On Same Line");
	}
	else
	{
		printf("All Points Are Not On Same Line");
	}
	
	return 0;
}


