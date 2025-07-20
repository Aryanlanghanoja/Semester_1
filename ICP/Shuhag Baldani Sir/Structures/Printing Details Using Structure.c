#include<stdio.h>
#include<conio.h>

struct book
{
	char book_name[50];
	char author_name[50];
	int page_no;
	float price;
};

int main()	
{
	struct book book1;
	
	printf("Enter The Book Name:-");
	gets(book1.book_name); 
	
	printf("Enter The Author's Name:-");
	gets(book1.author_name);
	
	printf("Enter The Page No:-");
	scanf("%d",&book1.page_no); 
	
	printf("Enter The Price Of Book:-");
	scanf("%f",&book1.price);
	
	printf("The Name Of Book Is %s\n",book1.book_name);
	printf("The Author's Name Is %s\n",book1.author_name);
	printf("The Pages In The Book Is %d\n",book1.page_no);
	printf("The Price Of Book Is %.2f\n",book1.price);
	
	getch();
}