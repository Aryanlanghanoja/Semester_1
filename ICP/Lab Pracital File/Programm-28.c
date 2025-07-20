#include<stdio.h>

union cricketer
{
	float batting_avg;
	int player_age;
};

union cricker_name
{
	char player_name[50];
};

void swap (float *a,float *b)
{
	float temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
	
	printf("After Swap:-\n");
	printf("Average Of Player-1=%.2f\nAverage Of Player-2=%.2f",*a,*b);
	
}
int main()
{
	int n;
	
	printf("Enter The Number Of Players:-");
	scanf("%d",&n);
	
	union cricketer player[n];
	union cricker_name name[n];
	float avg[n];
	
	for(int j=0;j<n;j++)
	{
		printf("Enter The Name Of Player-%d:-",j+1);
		scanf("%s",&name[j].player_name);
	}
	
	for(int i=0;i<n;i++)
	{
		
		printf("Enter The Batting Average Of Player-%d:-",i+1);
		scanf("%f",&player[i].batting_avg);
		avg[i]=player[i].batting_avg;
		
		printf("Enter The Age Of Player-%d:-",i+1);
		scanf("%d",&player[i].player_age);
		
		printf("\n\n");
		
	}
	
	printf("Before Swap:-\n");
	for(int k=0;k<n;k++)
	{
		printf("The Name Of Player-%d Is %s\n",k+1,name[k].player_name);
		printf("The Batting Average Of Player-%d Is %.2f\n",k+1,avg[k]);
		printf("The Age Of Player-%d Is %d\n",k+1,player[k].player_age);
	}
	
	swap(&avg[0],&avg[1]);
	
}