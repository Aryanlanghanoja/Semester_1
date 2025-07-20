#include<stdio.h>
int main(){
	int a,d1,d2,d3,d4,d5;
	printf("Enter A Three Digit Number:-");
	scanf("%d",&a);
	//Taking Example 12345
	d1= a%10;// d1=5
	a=a/10; // a=1234
	d2=a%10;//d2=4
	a=a/10;//a=123
	d3=a%10;//d3=3
	a=a/10;//a=12
	d4=a%10;//d4=2
	a=a/10;//a=10
	d5=a%10;//d5=1
	a=a/10;
	printf("Addition Is %d",d1+d2+d3+d4+d5);
	return 0;
}