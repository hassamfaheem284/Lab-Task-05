#include <stdio.h>

int main()
{
   int type,transaction;
   
   printf("Enter Your Account Type (1=Saving 2=Current) : ");
   scanf("%d", &type);
   
   switch(type)
   {
   	 case 1 : 
   	 printf("Enter Transaction Choice (1=Deposit 2=Withdraw 3=Check Balance) : ");
   	 scanf("%d", &transaction);
   	   switch(transaction)
   	   {
   	   	case 1 :
   	   		printf("Your Money Will Deposit In Your Saving Account!");
   	   		break;
   	   	case 2 :
   	   		printf("Your Money Will Withdraw From Your Saving Account!");
   	   		break;
   	   	case 3 :
			printf("You Will See Your Current Balance In Your Saving Account!");
			break; 	
		default : 
		    printf("Invalid Transaction Choice!");
   	  	}
   	  	break;
   	 case 2 : 
		printf("Enter Transaction Choice (1=Deposit 2=Withdraw 3=Check Balance) : ");
   	 scanf("%d", &transaction);
   	   switch(transaction)
   	   {
   	   	case 1 :
   	   		printf("Your Money Will Deposit In Your Current Account!");
   	   		break;
   	   	case 2 :
   	   		printf("Your Money Will Withdraw From Your Current Account!");
   	   		break;
   	   	case 3 :
			printf("You Will See Your Current Balance In Your Current Account!");
			break; 	
		default :
			printf("Invalid Transaction Choice!");
   	  	}
   	  	break; 	
   	default :
   		printf("Invalid Account Type!");
    }		
}
