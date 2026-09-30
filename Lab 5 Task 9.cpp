#include <stdio.h>

int main()
{
	char color,pedestrian;
	
	printf("Enter Traffic Light Color (R=Red Y=Yellow G=Green) : ");
	scanf(" %c", &color);
	
	switch(color)
	{
	 case 'R' :
	  printf("Is Pedestrian Button Pressed? (Y=Yes N=No) : ");
	  scanf(" %c", &pedestrian);
	   switch(pedestrian)
	   {
	   	case 'Y' :
	   		printf("Stop! Pedestrians Are Crossing.");
	   		break;
	   	case 'N' :
	   		printf("Stop!");
	   		break;
	   	default :
	   		printf("Invalid Pedestrian Button Choice!");
       }	
       break;
	 case 'Y' :
	 	printf("Get Ready To Go!");
	 	break;
	 case 'G' :
	    printf("Is Pedestrian Button Pressed? (Y=Yes N=No) : ");
	  scanf(" %c", &pedestrian);
	   switch(pedestrian)
	   {
	   	case 'Y' :
	   		printf("Go! But Watch For Pedestrians.");
	   		break;
	   	case 'N' :
	   		printf("Go!");
	   		break;
	   	default :
	   		printf("Invalid Pedestrian Button Choice!");
       }	
       break;	
	default : 
	 printf("Invalid Traffic Light Color Choice!");	
	}
	
	
	
	
	
	
	
	
}
