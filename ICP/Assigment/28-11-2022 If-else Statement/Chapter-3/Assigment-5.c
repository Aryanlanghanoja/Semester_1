#include<stdio.h>

int main(void)
{
	
	int forward_number,reverse_number,n1,n2,n3,n4,n5;
	
	printf("Enter A Five Digit Number:-");
	scanf("%d",&forward_number);
	
	n1=forward_number%10;
	forward_number=forward_number/10;
	 
	n2=forward_number%10;
	forward_number=forward_number/10;
	
	n3=forward_number%10;
	forward_number=forward_number/10;
	
	n4=forward_number%10;
	forward_number=forward_number/10;
	
	n5=forward_number%10;
	forward_number=forward_number/10;
	
	reverse_number=(n1*10000)+(n2*1000)+(n3*100)+(n4*10)+n5;
	
	printf("Reverse Number Is %d\n",reverse_number);
	
	if(forward_number==reverse_number)
	{
		printf("Number and It's Reverse Number Is Same");
	}
	else
	{
		printf("Number and It's Reverse Number Is  Not Same");
	}

	return 0;
}









