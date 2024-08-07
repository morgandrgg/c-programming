#include<stdio.h>
#include<math.h>
void main()
{
	int number,NEGATIVE,POSITIVE;
	char c;
	printf("\n\n\tEnter the number : ");
	scanf("%d%c",&number,&c);
	
	      if(number > 1)
		     {
	        printf("\n\n\tPOSITIVE"); 
	         }
	      else if(number < 0)
		     {
	        printf("\n\n\tNEGATIVE");
	         }
	       else if(number == c)
		     {
		     	printf("\n\n\tZERO");
			 }  
	      
//	default:
//	  printf("\n\n\tZERO");				  	
//     }	 
}
