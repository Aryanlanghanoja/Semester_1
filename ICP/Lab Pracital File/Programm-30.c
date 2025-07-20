#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main ()
{
    int count =0;
    char ch;
    FILE *fptr;
    
    fptr=fopen("text.txt","r");
    ch=getc(fptr);
    if(fptr==NULL)
    {
        printf("Can't open file. Make sure file exits.\n");
        exit(1);
    }
    
    do
    {
        ch = fgetc(fptr);
        count++;
    }while(ch!=EOF);
    
	fclose(fptr);
	
    printf("amount of charcter in file :- %d",count);
    
    return 0;
    

}

