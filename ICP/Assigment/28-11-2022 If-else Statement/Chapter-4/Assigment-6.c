#include<stdio.h>

int main(void)
{
	float BMI;
	
	printf("Enter Your BMI:-");
	scanf("%f",&BMI);
	
	if(BMI<15)
	{
		printf("You Are Starvation");
	}
	
	else if(BMI>=15.1 && BMI<=17.5)
	{
		printf("You Are Anorexic");
	}
	
	else if(BMI>=17.6 && BMI<=18.5)
	{
		printf("You Are Underweight");
	}
	
	else if(BMI>=18.6 && BMI<=24.9)
	{
		printf("You Are Ideal");
	}
	
	else if(BMI>=25.0 && BMI<=25.9)
	{
		printf("You Are Overweight");
	}
	
	else if(BMI>=30.0 && BMI<=30.9)
	{
		printf("You Are Obese");
	}
	
	else if(BMI>=40.0 )
	{
		printf("You Are Morbidly Obese");
	}
	
	return 0;
}



