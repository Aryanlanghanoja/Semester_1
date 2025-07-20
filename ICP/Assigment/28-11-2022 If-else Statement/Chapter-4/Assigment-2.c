#include<stdio.h>

int main(void)
{
	int hardness,carbon,tensile,grade;
	
	
	printf("Enter The Hardness Of Steel:-");
	scanf("%d",&hardness);
	
	printf("Enter The Carbon content Of Steel:-");
	scanf("%d",&carbon);
	
	printf("Enter The Tensile strength Of Steel:-");
	scanf("%d",&tensile);
	
	if(hardness>50 && carbon<0.7 && tensile>5600)
	{
		grade=10 ;
	}
	
	else if(hardness>50 && carbon<0.7)
	{
		grade=9 ;
	}
	
	else if(carbon<0.7 && tensile>5600)
	{
		grade=8 ;
	}
	
	else if(hardness>50 && tensile>5600)
	{
		grade=7 ;
	}
	
	else if(hardness>50 || carbon<0.7 || tensile>5600)
	{
		grade=6 ;
	}
	
	else 
	{
		grade=5;
	}
	
	printf("Grade Of Steel Is %d",grade);
	
	return 0;
}



