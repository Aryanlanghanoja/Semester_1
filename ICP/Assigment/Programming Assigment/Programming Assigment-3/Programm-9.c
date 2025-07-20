#include<stdio.h>
#include<conio.h>
#define N 20

int main()
{
	int a[N][N],b[N][N],c[N][N],m,n,p,q;
	
	printf("Enter The Number of Rows of Matrix-A:-");
	scanf("%d",&m);
	
	printf("Enter The Number of Columns of Matrix-A:-");
	scanf("%d",&n);
	
	printf("Enter The Number of Rows of Matrix-B:-");
	scanf("%d",&p);
	
	printf("Enter The Number of Columns of Matrix-A:-");
	scanf("%d",&q);
	
	if(n==p)
	{
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Enter The Number at a[%d][%d]:-",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\n\n");
	
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			printf("Enter The Number at b[%d][%d]:-",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			c[i][j]=0;
			
			for(int k=0;k<n;k++)
			{
				c[i][j]=c[i][j] + a[i][k]*b[k][j];
			}
		}
	}
	
	printf("Multiplication Of Matrix is\n");
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			printf("%d ",c[i][j]);
		}
		
		printf("\n");
	}
	
    }
    
    else
    {
    	printf("Multiplication Is Not Possible");
	}
	
	return 0;
}