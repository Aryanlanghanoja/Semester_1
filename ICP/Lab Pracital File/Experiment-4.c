#include<stdio.h>
#include<conio.h>

int main()
{
	int A,B;
	
	printf("Enter The Value Of A:-");
	scanf("%d",&A);
	
	printf("Enter The Value Of B:-");
	scanf("%d",&B);
	
	printf("Before Swap\nA=%d\nB=%d\n",A,B);
	
	A=A+B;
	B=A-B;
	A=A-B;
	
	printf("After Swap\nA=%d\nB=%d\n",A,B);
	
	return 0;
	
}