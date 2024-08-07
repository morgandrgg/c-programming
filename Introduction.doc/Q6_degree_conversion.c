#include<stdio.h>
#include<math.h>
int main()
{
	float degree_celcius,degree_fahrenheit;
	
	printf("Enter the number of degree_celcius : ");
	scanf("%f",&degree_celcius);
	
	degree_fahrenheit = (degree_celcius * 1.8) + 32;
	printf("\nDegree in fahrenheit %f\n\n",degree_fahrenheit);
}
