#include<stdio.h>
int main(){
	int age;
	char gen,ms;
	printf("Don't Press Enter Until You Entered Your All Necessary Detail. Only Press Space Bar Once\n");
	printf("Enter \nY for married \nN for umnarried\nM for male\nF for female\n");
	printf("Enter The Age & Gender & Marriage Status:-\n");
	scanf("%d %c %c",&age,&gen,&ms);
    if(ms=='Y'){
    	printf("Driver Is Insuared");
	}
	else{
		if(gen=='M'){
			if(age>=30){
				printf("Driver Is Insuared");
			}
			else{
				printf("Driver Is Not Insuared");
			}
		}
		else{
			if(age>=25){
				printf("Driver Is Insuared");
			}
			else{
				printf("Driver Is Not Insuared");
			}
		}
	}
    return 0;
}