//This program is used to convert centimeters to meters.
#include<stdio.h>
void main()
{
	float centimeters,meters;
	
	
	printf("Enter the length in centimeters -> ");
	scanf("%f",&centimeters);

        meters = centimeters * 0.01;
\
	printf("\nThis length in centimeters %f is = this length %f in meters\n\n",centimeters,meters);
}

