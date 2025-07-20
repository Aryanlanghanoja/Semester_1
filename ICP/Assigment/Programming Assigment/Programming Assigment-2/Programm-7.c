#include<stdio.h>
#include<math.h>

int main(void)
{
	int num,temp,i=0,ans,j,new_num=0,ans1=0;
	float rev_num=0;
	
	printf("Enter A Number:-");
	scanf("%d",&num);
	
	temp=num;
	new_num = num;
	
	while(num!= 0)
	{
		ans=num%10;
		num=num/10;
		i++;
	}
	
	for(j=1;j<=i;j++)
	{
		ans=0;
		ans=temp%10;
		temp=temp/10;
		ans1= pow(ans,i);
		rev_num = rev_num + ans1;
	}
	
	if(new_num ==  rev_num)
	{
		printf("%d Is An Armstrong Number",new_num);
	}
	
	else
	{
		printf("%d Is Not An Armstrong Number",new_num);
	}
	
	return 0;
}