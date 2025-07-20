#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter A Age Of Person-A:-");
	scanf("%d",&a);
	printf("Enter A Age Of Person-B:-");
	scanf("%d",&b);
	printf("Enter A Age Of Person-C:-");
	scanf("%d",&c);
	printf("Age Of Person-A Is %d Years\n",a);
	printf("Age Of Person-B Is %d Years\n",b);
	printf("Age Of Person-C Is %d Years\n",c);
//	printf("Age Of Person-D Is %d Years\n",d);
//	printf("Age Of Person-E Is %d Years\n",e);
//	if(eld>b){
//		if(eld>c){
//			printf("Person-A Is Eldest\n");
//		}
//		else{
//			printf("Person-C Is Eldest\n");
//		}	
//	}
//	else if(b>c){
//		printf("Person-B Is Eldest\n");
//	}
//	else{
//		printf("Person-C Is Eldest");
//	}
	if(a>b && a>c){
		printf("Person-A Is Eldest\n");
	}
	else if(b>a && b>c){
		printf("Person-B Is Eldest\n");
	}
	else{
		printf("Person-C Is Eldest\n");
	}
	if(a<b && a<c){
		printf("Person-A Is Youngest\n");
	}
	else if(b<a && b<c){
		printf("Person-B Is Youngest\n");
	}
	else{
		printf("Person-C Is Youngest\n");
	}
	return 0;
}