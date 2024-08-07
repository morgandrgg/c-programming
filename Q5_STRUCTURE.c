#include<stdio.h>
struct measurement
{
	float cm;
};
void main()
{
	struct measurement meters;
	float centimeters;
	printf("Enter the length in centimeters : ");
	scanf("%f",&centimeters);
	
	meters.cm = (centimeters / 100.0);
	
	printf(" %.2f cm = %.2f M ",centimeters,meters.cm);
}

