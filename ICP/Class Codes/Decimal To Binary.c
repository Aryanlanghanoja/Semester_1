#include<stdio.h>

int main(void)
{
	int num,ans;
	
	printf("Enter A Number To convert into Binary Format:-");
	scanf("%d",&num);
	
	while(num!=0)
	{
		ans = num % 2 ;
		num = num / 2;
		
		printf("%d ",ans);
	}
    printf("\nJust Reverse The Sequence");
    return 0;
}