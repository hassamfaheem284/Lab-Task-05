#include <stdio.h>

int main()
{
	int age,ticket,discount,final_ticket;
	char day;
	
	printf("Enter Your Age : ");
	scanf("%d", &age);
	
	printf("Enter Day (W=Weekday H=Weekend/Holiday) : ");
	scanf(" %c", &day);
	
	if(age<12 || age>60)
	{
	  if(day=='W')
	  {
	  	ticket=500;
	  	discount=200;
	  	final_ticket=ticket-discount;
	  }
	  else
	  {
	  	ticket=700;
	  	discount=200;
	  	final_ticket=ticket-discount;
	  }
	}
	else
	{
	  if(day=='W')
	  {
	  	ticket=1000;
	  	discount=0;
	  	final_ticket=ticket-discount;
	  }
	  else
	  {
	  	ticket=1500;
	  	discount=0;
	  	final_ticket=ticket-discount;
	  }
	}
	 
	 printf("Your Original Ticket Price Is : %d\n", ticket);
	 printf("Your Availed Discount Is : %d\n", discount);
	 printf("Your Ticket Price After Discount Is : %d\n", final_ticket);
	
	
	
	
	
	
}
