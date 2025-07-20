#include <stdio.h>
#include <string.h>
 
struct Student 
{
    int roll_no;
    char name[30];
    char branch[20];
    int batch;
};
 
int main()
{
 
    struct Student s1;
    struct Student *ptr = &s1;
    
    printf("Enter The Roll-no:-");
    scanf("%d",&s1.roll_no);
    
    printf("Enter The Name:-");
    scanf("%s",&s1.name);
    
    printf("Enter The Branch:-");
    scanf("%s",&s1.branch);
    
    printf("Enter The Batch:-");
    scanf("%d",&s1.batch);
 
    printf("Roll Number: %d\n", (*ptr).roll_no);
    printf("Name: %s\n", (*ptr).name);
    printf("Branch: %s\n", (*ptr).branch);
    printf("Batch: %d", (*ptr).batch);
 
    return 0;
}