#include <stdio.h>

int main()
{
  int side1,side2,side3;
  
  printf("Enter Triangle Side 1 : ");
  scanf("%d", &side1);
  	
  printf("Enter Triangle Side 2 : ");
  scanf("%d", &side2);	
	
  printf("Enter Triangle Side 3 : ");
  scanf("%d", &side3);	
	
  if(side1+side2>side3 && side2+side3>side1 && side1+side3>side2)	
  {
  	if(side1==side2 && side1==side3 && side2==side3)
  	 {
  	 	printf("It Is An Equilateral Triangle!");
	 }
  	else if(side1==side2 || side1==side3 || side2==side3)
  	 {
  	 	printf("It Is An Isosceles Triangle!");
	 }
  	else
  	 {
  	 	printf("It Is A Scalene Triangle!");
	 }
  	}
	else
	{
		printf("It Is Not A Valid Triangle!");
	}
	
	
	
	
	
}
