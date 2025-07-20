#include<stdio.h>

int main(void)
{
	double number,addition=0,average=0;
	int i;
	
	for(i=1;i<=3;i++)
	{
		printf("Enter A Number-%d:-",i);
		scanf("%lf",&number);
		
		addition = addition + number ;
	}
	
	average = addition / (i-1) ;
	
	printf("\n");
	
	printf("The Average Is %.2lf\n",average);
	
	return 0;
}



