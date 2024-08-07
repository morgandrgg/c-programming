#include<stdio.h>
void main()
{
	int choice,female,male,amount,tax;
	
	printf("\n\n\t\t\t    EMPLOYEE              TAX RATE");
	printf("\n\t\t\t___________________________________");
	printf("\n\n\t\t\t1)Female earning <  15000      0.12");
	printf("\n\n\t\t\t2)Female earning >= 15000      0.14");
	printf("\n\n\t\t\t3)Male earning   <  14000      0.13");
	printf("\n\n\t\t\t4)Male earning   >= 14000      0.15");
	printf("\n\n\t\tPLEASE SELECT A CHOICE : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:{
			    printf("\n\n\t\t\tHow much does she earn? ");
		        scanf("%d",&amount);
		        tax = amount * 0.12;
		        printf("\n\n\t\t\tTHIS IS HER TAX : %d",tax);
		       break;
		       }
		case 2:{
			    printf("\n\n\t\t\tHow much does she earn? ");
		        scanf("%d",&amount);
		         tax = amount * 0.14;
		        printf("\n\n\t\t\tTHIS IS HER TAX : %d",tax);
		       break;
		       }    
		case 3:{
		        printf("\n\n\t\t\tHow much does he earn? ");
		        scanf("%d",&amount);
		         tax = amount * 0.13;
	            printf("\n\n\t\t\tTHIS IS HIS TAX : %d",tax);
		       break;
		       }    
	    case 4:{
		        printf("\n\n\t\t\tHow much does he earn? ");
		        scanf("%d",&amount);
		         tax = amount * 0.15;
		        printf("\n\n\t\t\tTHIS IS HIS TAX : %d",tax);
		       break;
		      }    
		default :{
		    printf("\n\n\t\tINVALID CHOICE.");
			    }   
	}
	    printf("\n\n"); 
}
