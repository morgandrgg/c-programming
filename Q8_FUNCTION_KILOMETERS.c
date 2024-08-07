//This program is used to convert distance in kilometers to meters using functions.
#include<stdio.h>
float meters_change(float kilometers);
void main()
{
	float kilometers,meters;
	
	printf("Enter the measurement in kilometer : ");
	scanf("%f",&kilometers);
	
	meters = meters_change(kilometers);
	printf("\nMeters = %f\n\n",meters);
}
float meters_change(float kilometers)
{
	float meters;
	meters = kilometers * 1000;
	return meters;
}
