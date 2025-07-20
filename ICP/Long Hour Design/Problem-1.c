#include<stdio.h>
#include<conio.h>
#include<string.h>



int main()
{
	int r5=5,r3=3,r2=2,person,date=8,month=1,year=2022,book,day_over,i=0,start_time,end_time,room_no;
	char name[50],reason[100],position[20];
	char cust_name[10],cust_position[10];
    
	for(int i=0;i<=22;i++)
	{
	
	printf("Room-1 with Capacity-10\n");
	printf("Room-2 with Capacity-10\n");
	printf("Room-3 with Capacity-10\n");
	printf("Room-4 with Capacity-10\n");
	printf("Room-5 with Capacity-10\n\n");
	printf("Room-6 with Capacity-20\n");
	printf("Room-7 with Capacity-20\n");
	printf("Room-8 with Capacity-20\n\n");
	printf("Room-9 with Capacity-30\n");
	printf("Room-10 with Capacity-30\n\n");
	
	printf("Date:- %d-%d-%d\n",date,month,year);
	
	while(day_over!=3)
	{
		
	printf("Room Availability:-\n");
	printf("There Are %d Board-rooms Available.\n",r5+r3+r2);
	printf("%d Board-rooms With Capacity Of 10 People.\n",r5);
	printf("%d Board-rooms With Capacity Of 20 People.\n",r3);
	printf("%d Board-rooms With Capacity Of 30 People.\n",r2);
	
	printf("When Day Over Enter 3 Otherwise Enter 2:-");
	scanf("%d",&day_over);
	
	if(day_over == 3)
	{
		printf("Today Total %d Room Is Booked\n",i);
		
		for(int k=1;k<=10;k++)
		{
			printf("Room No-%d",k);
			printf("Name-%s",cust_name[k]);
			printf("Position-%s",cust_position[k]);
		}
		date++;
	}
	
	else
	{
	
	printf("Booking Window:-\n");
	
	printf("If You Want To Book The Room Then Enter 1 and If you don't then Enter 0\n");
	scanf("%d",&book);
	
	printf("Enter The Room Number:-");
	scanf("%d",&room_no);
	
	if(book == 1)
	{
	
	printf("Enter Your Position:-");
	scanf("%s",position);
	cust_position[room_no]=position;
	
	printf("For How Many People You Want To Book The Room:-");
	scanf("%d",&person);
	
	if((r5>0 || r3>0 || r2>0) || position=='senior')
	{
	    printf("Rooms Are Available\n");
	
	if((person<=10 && r5>0) || position=='senior')
	{
		printf("We Are Booking A Room Of 10 Persons For You.\n");
		r5--;
	}
	
	else if((person>10 && person<=20 && r3>0) || position=='senior')
	{
		printf("We Are Booking A Room Of 20 Persons For You.\n");
		r3--;
	}
	
	else if((person>20 && r2>0) || position=='senior')
	{
		printf("We Are Booking A Room Of 30 Persons For You.\n");
		r2--;
	}
	
	printf("What Is Your Name:-");
	scanf("%s",name);
	cust_name[room_no]=name;
	
	printf("Why You Want To Book The Room:-");
	scanf("%s",reason);
	fflush(stdin);
	
	printf("Enter The Starting Time:-");
	scanf("%d",&start_time);
	
	printf("Enter The Ending Time:-");
	scanf("%d",&end_time);
	
	printf("Your Room Is Booked\n");
	printf("Booking Details:-\n");
	printf("Name:- %s\n",name);
	printf("Reason:-%s\n",reason);
	printf("Time-\nFrom:-%d\n",start_time);
	printf("To:-%d\n",end_time);
	i++;
    }
    
    else
    {
    	printf("All Rooms Are Full\n");
	}
    }
    }
    }
    }
	
	return 0;
}