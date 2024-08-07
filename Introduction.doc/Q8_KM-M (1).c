#include<stdio.h>
void main()
{
	float kilometer,meters;
	
	printf("Enter the measurement in kilometer : ");
	scanf("%f",&kilometer);
	
	meters = kilometer * 1000;
	printf("\nMeters = %f\n\n",meters);
}
