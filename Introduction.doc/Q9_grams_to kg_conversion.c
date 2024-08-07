//This program is used to convert kg to grams the calculate the number of packets.
#include<stdio.h>
void main()
{
	float grams,kilograms,packets;
	
	printf("Enter the weight in grams : ");
	scanf("%f",&grams);
	
	kilograms = grams / 1000;
	printf("\nKilograms = %f\n",kilograms);
	
	packets = kilograms * grams;
	printf("\nNumber of packets that form ONE KG = %f\n\n",packets);
}
