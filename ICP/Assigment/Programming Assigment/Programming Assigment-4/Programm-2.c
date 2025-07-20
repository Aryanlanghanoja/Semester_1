#include<stdio.h>
#include<string.h>
  
int main()
{
    char names[10][30],temp[30];  
    
    printf("Enter 10 names:\n");
    
    for(int i=0; i<10;i++)
    {
        scanf("%s",&names[i]);
    }
    
    for(int i=0;i<10;i++)
    {
    	
        for(int j=i+1;j<10;j++)
        {
            if(strcmp(names[i],names[j])>0)
            {
              strcpy(temp,names[i]);
              strcpy(names[i],names[j]);
              strcpy(names[j],temp);
            }
        }
    }
    printf("Names in ascending order are:");
    
    for(int i=0;i<10;i++)
    {
        printf("\n%s",names[i]);
    }
    
    return 0;
    
}