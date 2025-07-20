/* Write Down a programm to impliment a structure named as library that contains book_id,book_name,author_name,publisher_name for entry
of 10 books. */

#include<stdio.h>

struct library
{
	double book_id;
	char book_name[30];
	char author_name[30];
	char publisher_name[30];
}book[10];

int main()
{
	for(int i=0;i<10;i++)
	{
		printf("Enter The Name Of Book-%d:-",i+1);
		gets(book[i].book_name);
		fflush(stdin);
		
		printf("Enter The Author's Name Of Book-%d:-",i+1);
		gets(book[i].author_name);
		fflush(stdin);
		
		printf("Enter The Publisher's Name Of Book-%d:-",i+1);
		gets(book[i].publisher_name);
		fflush(stdin);
		
		printf("Enter The Book ID Of Book-%d:-",i+1);
		scanf("%lf",&book[i].book_id);
		fflush(stdin);

	}
	
	for(int i=0;i<10;i++)
	{
		printf("Details Of Book-%d\n",i+1);
		printf("Book ID:-%lf\n",book[i].book_id);
		printf("Book Name:-%s\n",book[i].book_name);
		printf("Author Name:-%s\n",book[i].author_name);
		printf("Publisher Name:-%s\n",book[i].publisher_name);
		printf("\n\n");
	}
	
	return 0;
	
}