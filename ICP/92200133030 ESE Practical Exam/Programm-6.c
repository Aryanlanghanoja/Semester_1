// Write Down a Programm to calculate the area of circle,rectangle and square using Switch Case.

#include<stdio.h>
#define PI 3.14159

int main()
{
	double radius,side,length,breadth;
	int choice;
	
	printf("Enter Your Choice\n1=Circle\n2=Rectangle\n3=Square\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			{	
				printf("Enter The Radius Of Circle:-");
				scanf("%lf",&radius);
				
				printf("The Area Of A Circle Is %lf",PI * radius *  radius);
				
				break;
			}
			
		case 2:
			{
				printf("Enter The Lenght Of A Rectangle:-");
				scanf("%lf",&length);
				
				printf("Enter The Breadth Of A Rectangle:-");
				scanf("%lf",&breadth);
				
				printf("The Area Of A Rectange Is %lf",length*breadth);
				
				break;
			}
			
		case 3:
			{
				printf("Enter The Side Of A Square:-");
				scanf("%lf",&side);
				
				printf("The Area Of A Square iS %lf",side*side);
				
				break;
			}
			
		default :
		{
				printf("Enter Valid Choice");
				break;	
		}
	}
	
	return 0;
	
}