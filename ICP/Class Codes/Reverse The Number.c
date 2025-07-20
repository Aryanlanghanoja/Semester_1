#include<stdio.h>
int main(){
	int num,d1,d2,d3,d4,d5;
	printf("Enter A Five-digit Number:-");
	scanf("%d",&num);
	// Taking Example 12345
	d1=num%10;//d1=5
	num=num/10;//num=1234
	d2=num%10;//d2=4
	num=num/10;//num=123
	d3=num%10;//d3=3
	num=num/10;//num=12
	d4=num%10;//d2=2
	num=num/10;//num=10
	d5=num%10;//d5=1
//	num=num/10;
	printf("Reverse Number IS %d%d%d%d%d",d1,d2,d3,d4,d5);
	return 0;
}