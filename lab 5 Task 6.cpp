#include <stdio.h>
#include <math.h>

int main()
{
	int num1,num2,mode,number;
	char operators,operatorss;
	float result;
	
	printf("Enter Your Mode (1=Basic Arithmetic 2=Power/Root Operations) : ");
	scanf("%d", &mode);
	
	switch(mode)
	{
	 case 1 :
	  printf("Enter Number 1 : ");
	  scanf("%d", &num1);
	  printf("Enter Number 2 : ");
	  scanf("%d", &num2);	
	  printf("Enter Operator (+,-,*,/) : ");
	  scanf(" %c", &operators);	
		switch(operators)
		{
		  case '+':
		  	result=num1+num2;
		  	break;
		  case '-':
		    result=num1-num2;
			break;
		  case '*':
		    result=num1*num2;
		    break;
		  case '/':
		    result=(float)num1/num2;
			break;		
		  default :
		     printf("Invalid Operator!");		
	    }
	    break;
	 case 2 :
	  printf("Enter Number : ");
	  scanf("%d", &number);
	  printf("Enter Operator (S=Square R=Square Root) : ");
	  scanf(" %c", &operatorss);
		switch(operatorss)
		{
			case 'S' :
			  result=pow(number,2);
			  break;
			case 'R' :
			  result=(float)sqrt(number);  
			  break;	
			default :
				printf("Invalid Operator!");
		}
		break;
 	default :
		printf("Invalid Mode!");
	}
	
	
	printf("Your Result Is : %.2f", result);
	
	
	
	
	
	
	
}
