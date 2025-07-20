#include<stdio.h>

int main(void)
{
	double number_1,number_2;
	
	printf("Enter The Number-1:-");
	scanf("%lf",&number_1);
	
	printf("Enter The Number-2:-");
	scanf("%lf",&number_2);
	
	printf("\n");
	
	printf("Before Swap\nNumber-1 = %.2lf\nNumber-2 = %.2lf",number_1,number_2);
	
	number_1 = number_1 + number_2 ;   //a=a+b;//a=30 (10+20)
    number_2 = number_1 - number_2 ;  //b=a-b;//b=10 (30-20)
    number_1 = number_1 - number_2 ;  //a=a-b;//a=20 (30-10)
    
    printf("\n\n");
    
    printf("After Swap\nNumbwe-1 = %.2lf\nNumber-2 = %.2lf",number_1,number_2);
    
    return 0;
}