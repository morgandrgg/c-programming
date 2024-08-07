#include<stdio.h>
void main()
{
	int first_number,second_number,difference;
	
	printf("\n\n\tEnter the first_number  : ");
	scanf("%d,",&first_number);
	printf("\n\n\tEnter the second_number  : ");
	scanf("%d,",&second_number);
	{
	if(first_number>second_number){
		difference = first_number - second_number;
		printf("\n\n\tThis is the difference : %d",difference);
	     }
	else if(first_number<second_number){
		difference = second_number - first_number;
		printf("\n\n\tThis is the differnce : %d",difference);
     	}
    }
}
