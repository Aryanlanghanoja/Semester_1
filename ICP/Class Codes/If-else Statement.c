#include<stdio.h>
int main(){
	int num;
	printf("Enter A Number:-");
	scanf("%d",&num);
	if(num%2==0){
		printf("%d Is Even Number",num);
	}
	else{
		printf("%d Is Odd Number",num);
	}
	return 0;
}