#include<stdio.h>
struct temp
{
	float degree_celcius;
};
void main()
{
	struct temp F;
	float celcius;
	printf("Enter the temp in degree celcius: ");
	scanf("%f",&celcius);
	
	F.degree_celcius = (celcius * 2) + 30;
	
	printf(" %.2f celcius = %.2f F ",celcius,F.degree_celcius);
}

