#include<stdio.h>

int main(void)
{
	float cost_price,selling_price;
	
	printf("Enter A Cost Price:-");
	scanf("%f",&cost_price);
	
	printf("Enter A Selling Price:-");
	scanf("%f",&selling_price);
	
	if(selling_price>cost_price)
	{
		printf("Congratulations! You Made A Profit of Rs-%.2f /-\n",selling_price-cost_price);
	}
	
	else
	{
		printf("Opps! You Made A Loss of Rs-%.2f /-\n",cost_price-selling_price);
	}
	
	return 0;
}




