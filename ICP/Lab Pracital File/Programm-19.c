#include<stdio.h>

int main(void)
{
    int a=0,b=1,c,n;
    
    printf("Enter The Value Of N:-");
    scanf("%d",&n);
    
    printf("%d %d ",a,b);
    
    for(int i=1;i<=n;i++)
    {
    	  c=a+b;
    	  a=b;
          b=c;
          printf("%d ",c);
	}
	
	return 0;
	
}