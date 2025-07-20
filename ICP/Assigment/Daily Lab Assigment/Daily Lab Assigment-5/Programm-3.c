#include<stdio.h>
#include<math.h>

int power(int base,int exp)
{
	int ans;
	ans=pow(base,exp);
	return ans;
}

int main()
{
	int base,exp;
	
	printf("Enter The Base:-");
	scanf("%d",&base);
	
	printf("Enter The Power:-");
	scanf("%d",&exp);
	
	printf("%d Raise to %d Is %d",base,exp,power(base,exp));
	
	return 0;
	
}