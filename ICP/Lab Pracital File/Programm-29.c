#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main ()
{
    FILE *fptr;
    fptr=fopen("text.txt","r");
    char ch;
    char text[100];
    ch= fgetc(fptr);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fptr);

    }
    
    fclose(fptr);

}
