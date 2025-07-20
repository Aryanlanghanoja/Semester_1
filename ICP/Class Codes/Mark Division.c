#include<stdio.h>
int main(){
	int mar;
	printf("Enter Your Marks:-");
	scanf("%d",&mar);
	if(mar>=60){
		printf("1st Division");
	}
	else if(mar>=50){
		printf("2nd Division");
	}
	else if(mar>=33){
		printf("3rd Division");
	}
	else{
		printf("Fail");
	}
	return 0;
}