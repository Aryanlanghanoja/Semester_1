#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	
	printf("Enter The Size Of Array:-");
	scanf("%d",&n);
	
	int a[n],even=0,i,odd=0;
	
	for(i=0;i<n;i++)
	{
		printf("Enter The Element a[%d]:-",i);
		scanf("%d",&a[i]);
		
		if(a[i]%2==0)
		{
			printf("%d Is A Even Number\n",a[i]);
			even++;
		}
		
		else
		{
			printf("%d Is A Odd Number\n",a[i]);
			odd++;
		}
	}
	
	printf("There Are Total %d Even Numbers In An Array\n",even);
	printf("There Are Total %d Odd Numbers\n",odd);
	
	return 0;
	
}