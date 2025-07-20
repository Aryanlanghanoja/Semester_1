#include<stdio.h>
#include<math.h>

int main()
{
	int a[3][3],sum=0;
	
	printf("Enter The Element Of Matrix:-\n");
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("a[%d][%d]:-",i,j);
			scanf("%d",&a[i][j]);
			sum=sum+a[i][j];
		}
	}
	
	printf("The Addition Of all Elements In the Matrix Is %d",sum);
	
	return 0;
}