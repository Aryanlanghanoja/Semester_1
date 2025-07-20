#include<stdio.h>
#include<math.h>

int main(void)
{
    int num,temp,rev=0,ans;
    
    printf("Enter A Number:-");
    scanf("%d",&num);
    
    temp = num ;
    
    while(num != 0) //123 ,12 ,1
    {
    	ans = num%10 ; //3 ,2 , 1
    	rev = (rev*10) + ans ; //3 ,321
    	num = num/10; //12 , 1
	}
	
	if(temp == rev)
	{
		printf("%d Is Palindrome Number",temp);
	}
	
	else
	{
		printf("%d Is Not Palindrome Number",temp);
	}
	
	return 0;
}