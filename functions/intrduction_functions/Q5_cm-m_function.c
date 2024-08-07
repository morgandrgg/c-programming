//This program is a function program used to convert centimeters to meters.
#include<stdio.h>
float centi_change(float centimeters);
void main()
{
	float centimeters,meters;
	
	
	printf("Enter the length in centimeters -> ");
	scanf("%f",&centimeters);
	
	meters = centi_change(centimeters);
	printf("\nThis length in centimeters %f is = this length %f in meters\n\n",centimeters,meters);
}
float centi_change(float centimeters)
{
	float meters;
	meters = centimeters * 0.01;
	return meters;
}
