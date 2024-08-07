#include<stdio.h>
int main()
{
	int first_number,second_number,result;
	char opera;
	
	printf("\n\n\tEnter the first_number and the second_number : ");
	scanf("%d%d",&first_number,&second_number);
	printf("\n\tEnter an operator: ");
	scanf("%c",&opera);
	
	switch(opera)
	{
	 case '+':
	 	result = first_number + second_number;
	 	printf("\n\tThis is the sum %d",result);
	 	break;
	 
	 case '-':
	 	result = first_number - second_number;
	 		printf("\n\tThis is the difference %d",result);
	 break;
	 
	 case '/':
	 	result = first_number / second_number;
	 	printf("\n\tThis is quotient %d ",result);
	 	break;
	 
	 case '*':
	 	result = first_number * second_number;
	 	printf("\n\tThis is the product %d",result);
	 	break;
	 
	 default:
	 	printf("\n\tINVLID ENTRY");	
	} 
return 0;
}
