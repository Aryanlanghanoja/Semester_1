#include<stdio.h>
int main(){
	float bs,da,ha,gs;
	printf("Enter Your basic Salary:-");
	scanf("%f",&bs);
	da=0.4*bs;
	ha=0.2*bs
	;
	gs=bs+da+ha;
	printf("Base Salary:-%.2f\n",bs);
	printf("Dearness Allowance:-%.2f\n",da);
	printf("House Rent Allowance:-%.2f\n",ha);
	printf("_________________________________");
	printf("\nGross Salary:-%.2f/-",gs);
	return 0;
}