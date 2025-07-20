#include<stdio.h>
int main(){
	int a,b,c,d,e,maxs;
	printf("Enter A Salary Of Amit Sharma:-");
	scanf("%d",&a);
	printf("Enter A Salary Of Bhavesh Aggrawal:-");
	scanf("%d",&b);
	printf("Enter A Salary Of Chintan Akhani:-");
	scanf("%d",&c);
	printf("Enter A Salary Of Dharmesh Patel:-");
	scanf("%d",&d);
	printf("Enter A Salary Of Nilesh Patil:-");
	scanf("%d",&e);
	printf("Salary Of Amit Sharma Is %d\n",a);
	printf("Salary Of Bhavesh Aggrawal Is %d\n",b);
	printf("Salary Of Chintan Akhani Is %d\n",c);
	printf("Salary Of Dharmesh Patel Is %d\n",d);
	printf("Salary Of Nilesh Patil Is %d\n",e);

    if(a>b && a>c && a>d && a>e){
    	printf("\nAmit Sharma has the maximum Salary Of %d",a);
	}
	else if(b>a && b>c && b>d && b>e){
		printf("\nBhavesh Aggrawal has the maximum Salary Of %d",b);
	}
	else if(c>a && c>b && c>d && c>e){
		printf("\nChintan Akhani has the maximum Salary Of %d",c);
	}
	else if(d>a && d>b && d>c && d>e){
		printf("\nDharmesh Patel has the maximum Salary Of %d",d);
	}
	else{
		printf("\nNilesh Patil has the maximum Salary Of %d",e);
	}
	
	return 0;
}