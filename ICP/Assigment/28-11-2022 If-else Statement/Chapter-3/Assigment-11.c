#include<stdio.h>
#include<math.h>

int main(void)
{
	int x0,y0,x1,y1;
	float d01,x01,y01,radius;
	
	printf("Enter The Co-ordinates Of Circle:-");
	scanf("%d %d",&x0,&y0);
	
	printf("Enter A Radius Of a Circle:-");
	scanf("%f",&radius);
	
	printf("Enter The Co-ordinates Of Point:-");
	scanf("%d %d",&x1,&y1);
	
	printf("Center = (%d , %d)\n",x0,y0);
	printf("Radius = %.2f cm\n",radius);
	printf("Point = (%d , %d)\n",x1,y1);
	
	x01=pow((x0-x1),2);
	y01=pow((y0-y1),2);
	
	d01=pow((x01 + y01),0.5);
	
	printf("Distance Of Point From The Center is %.2f cm\n",d01);
	
	if(d01<radius)
	{
		printf("Point Lies Inside  Of The Circle");
	}
	
	else if(d01==radius)
	{
		printf("Point Lies On The Circle");
	}
	else
	{
		printf("Point Lies Outside Of The Circle");
	}
	
	return 0;
}





