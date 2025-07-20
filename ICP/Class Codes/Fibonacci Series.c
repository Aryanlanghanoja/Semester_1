#include<stdio.h>
int main(void)
{
    int a=0,b=1,c,i=1;
    printf("%d %d ",a,b);
    while(i<=8)
    {
    c=a+b;
    a=b;
    b=c;
    printf("%d ",c);
    i++;
}
	return 0;
}