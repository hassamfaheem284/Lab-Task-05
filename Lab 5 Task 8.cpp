#include <stdio.h>

int main()
{
  int category,item;
  
  
  printf("Enter Your Category (1=Beverages 2=Main Course 3=Desserts) : ");
  scanf("%d", &category);
  
  switch(category)
  {
  	case 1 :
  		printf("Enter Your Item (1=Soda 2=Cold Drink 3=Cocktail) : ");
  		scanf("%d", &item);
  	  switch(item)
  	  {
  	  	case 1 :
  	  		printf("Soda Price Is : 300 PKR ");
  	  		break;
  	  	case 2 :
			printf("Cold Drink Price Is : 150 PKR ");
			break;
		case 3 :
		    printf("Cocktail Price Is : 450 PKR ");
			break;
		default : 
		    printf("Invalid Item! ");		
  	  }
  	  break;
  	case 2 : 
  	    printf("Enter Your Item (1=Steak 2=Burger 3=Pizza) : ");
  		scanf("%d", &item);
  	  switch(item)
  	  {
  	  	case 1 :
  	  		printf("Steak Price Is : 2000 PKR ");
  	  		break;
  	  	case 2 :
			printf("Burger Price Is : 1100 PKR ");
			break;
		case 3 :
		    printf("Pizza Price Is : 2500 PKR ");
			break;
		default : 
		    printf("Invalid Item! ");		
  	  }
  	  break;
  	case 3 :
  		printf("Enter Your Item (1=Cake 2=Ice Cream 3=Cookie) : ");
  		scanf("%d", &item);
  	  switch(item)
  	  {
  	  	case 1 :
  	  		printf("Cake Price Is : 2300 PKR ");
  	  		break;
  	  	case 2 :
			printf("Ice Cream Price Is : 500 PKR ");
			break;
		case 3 :
		    printf("Cookie Price Is : 1500 PKR ");
			break;
		default : 
		    printf("Invalid Item! ");		
  	  }
  	  break;
  	default :
  		printf("Invalid Category");
   }
	
	
	
	
	
	
	
	
	
	
	
}
