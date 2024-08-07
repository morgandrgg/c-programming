#include<stdio.h>,
void main()
{
	float average,unit_one,unit_two,unit_three,unit_four,unit_five;
	
	printf("\nEnter the grades of the five units : ");
	scanf("%.2f%.2f%.2%.2f%.2f",&unit_one,&unit_two,&unit_three,&unit_four,&unit_five);
	
	average = (unit_one + unit_two + unit_three + unit_four + unit_five) /5.0;
	  printf("\n\n\t\tThis is the average mark %.2f",average);
	
	 {
	 
	 if(average  >100)
	        {
	         	printf("\n\n\t\tINVALID %.2f",average);
			}
    else if(average >= 75)
	         {
	         	printf("\n\n\t\tDISTICTION %.2f",average);
			 }
	else if(average >= 65)
	        {
	         	printf("\n\n\t\tCREDIT %.2f",average);
			}
	else if(average >= 50)
	        {
	         	printf("\n\n\t\tPASS %.2f",average);
			}
	else if(average >= 0)
	        {
	         	printf("\n\n\t\tFAIL %.2f",average);
			}

			
    }
}
