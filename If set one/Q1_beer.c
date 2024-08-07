#include<stdio.h>
void main()
{	
    int choice,bottles,cost;
	
	printf("\n\t*******Jamal and Daughter*******\n");
	printf("\t\tBEER BRAND PRICE");
	printf("\n\t\t_________________");
	printf("\n\t\t1) Tusker  ");
	printf("\n\t\t2) Pilsner ");
	printf("\n\t\t3) Smirnoff ice ");
	printf("\n\t\t4) White Cap ");
	
	printf("\n\n\tEnter your choice : ");
	scanf("%d",&choice);
	{
	if(choice == 1){
	 printf("\n\tHow many bottles of tusker do you want? : ",bottles);
	 scanf("%d",&bottles);
	 	 cost = 100.00 * bottles;
	 printf("\n\t%d bottles of tusker will cost you Ksh %d",bottles,cost);
	 }
	else if( choice == 2){
	 printf("\n\tHow many bottles of pilsner do you want? : ",bottles,cost);
	 scanf("%d",&bottles);
	 cost = 120.00 * bottles;
     printf("\n\t%d bottles of pilsner will cost you Ksh %d",bottles,cost); 
        }
    else if(choice ==3){
	  printf("\n\tHow many bottles of smirnoff ice do you want? : ",bottles,cost);
	  scanf("%d",&bottles);
	     cost = 140.00 * bottles;
    	 printf("\n\t%d bottles of smirnoff ice Ksh %d",bottles,cost);    
              }
    else if(choice == 4){
    	printf("\n\tHow many bottles of white cap? : ",bottles,cost);
    	scanf("%d",&bottles);
    	cost = 90 * bottles;
    	printf("\n\t%d bottles of white cap will cost you Ksh %d",bottles,cost);
	        }          
   else if(choice !=1 != 2 != 3 !=4){
   	printf("\n\tINVALID CHOICE ENTERED");
          }
    }
}
