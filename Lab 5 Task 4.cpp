#include <stdio.h>

int main()
{
  int units,per_unit_rate,total_bill;
  char type;
  
  printf("Enter Units Of Electricity Consumed : ");
  scanf("%d", &units);
  
  printf("Enter Connection Type (D=Domestic C=Commercial) : ");
  scanf(" %c", &type);	
	
  if(type=='D')
  {
  	if(units<=100)
  	 {
  	   per_unit_rate=5;
	   total_bill=units*per_unit_rate;	
	 }
  	else if(units>=101 && units<=300)
  	 {
  	   per_unit_rate=4;
	   total_bill=units*per_unit_rate;
	 }
  	else
  	 {
  	   per_unit_rate=3;
	   total_bill=units*per_unit_rate;
	 }
  }
  if(type=='C')
  {
  	if(units<=100)
  	 {
  	   per_unit_rate=10;
	   total_bill=units*per_unit_rate;	
	 }
  	else if(units>=101 && units<=300)
  	 {
  	   per_unit_rate=8;
	   total_bill=units*per_unit_rate;
	 }
  	else
  	 {
  	   per_unit_rate=6;
	   total_bill=units*per_unit_rate;
	 }
  }	
	
	printf("Your Per Unit Rate Is : %d\n", per_unit_rate);
	printf("Your Total Bill Is : %d", total_bill);
	
	
	
	
	
	
	
}
