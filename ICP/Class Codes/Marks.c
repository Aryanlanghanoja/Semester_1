#include<stdio.h>
int main(){
	int h,g,ss,m,e;
	char name;
	float tm,per;
//	printf("Enter Your Name:-");
//	scanf("%c",&name);
	printf("Enter Your History Marks:-");
	scanf("%d",&h);
	printf("Enter Your Geography Marks:-");
	scanf("%d",&g);
	printf("Enter Your Social Science Marks:-");
	scanf("%d",&ss);
	printf("Enter Your Maths Marks:-");
	scanf("%d",&m);
	printf("Enter Your English Marks:-");
	scanf("%d",&e);
	printf("\t\tMarksheet\n");
//	printf("Name:-%c\n",name);
	printf("History:- %d\n",h);
	printf("Geography:- %d\n",g);
	printf("Social Science:- %d\n",ss);
	printf("Maths:-%d\n",m);
	printf("English:-%d\n",e);
	tm= h+g+ss+m+e;
	printf("Your Total Marks Is %.2f\n",tm);
	per= tm/500*100;
	printf("Your Percentage Is %.2f",per);
	return 0;
}