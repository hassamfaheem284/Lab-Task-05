#include <stdio.h>

int main()
{
	int semester;
	char department;
	
	printf("Enter Department (C=Computer Science E=Electrical Engineering B=Business) : ");
	scanf(" %c", &department);
	
	switch(department)
	{
	 case 'C' :
	  printf("Enter Semester (1,2,3) : ");
	  scanf("%d", &semester);	
	   switch(semester)
	   {
	   	case 1 :
	   		printf("Core Course : Programming Fundamentals (PF)");
	   		break;
	   	case 2 :
	   		printf("Core Course : Object Oriented Programming (OOP)");
	   		break;
	   	case 3 :
	   		printf("Core Course : Data Structures (DS)");
	   		break;
	   	default :
	   		printf("Invalid Semester!");
	    }
	    break;
	case 'E' :
	 printf("Enter Semester (1,2,3) : ");
	  scanf("%d", &semester);	
	   switch(semester)
	   {
	   	case 1 :
	   		printf("Core Course : Applied Physics (AP)");
	   		break;
	   	case 2 :
	   		printf("Core Course : Linear Circuit Analysis (LCA)");
	   		break;
	   	case 3 :
	   		printf("Core Course : Electrical Network Analysis (ENA)");
	   		break;
	   	default :
	   		printf("Invalid Semester!");
	    }
	    break;	
	case 'B' : 
	 printf("Enter Semester (1,2,3) : ");
	  scanf("%d", &semester);	
	   switch(semester)
	   {
	   	case 1 :
	   		printf("Core Course : Financial Accounting (FA)");
	   		break;
	   	case 2 :
	   		printf("Core Course : Marketing Management (MM)");
	   		break;
	   	case 3 :
	   		printf("Core Course : Business Finance (BF)");
	   		break;
	   	default :
	   		printf("Invalid Semester!");
	    }
	    break;
	    default :
	    	printf("Invalid Department!");
	    break;	
		
	}
	
	
	
	
	
	
	
}
