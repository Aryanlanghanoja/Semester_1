#include<stdio.h>
int main(void)
{
	int sec,hr,min;
	printf("Enter The Seconds:-");
	scanf("%d",&sec);
	hr=sec/3600;
	sec=sec%3600;
	min=sec/60;
	sec=sec%60;
	printf("%d : %d : %d",hr,min,sec);
	return 0;
}