//this is function program used to convert convert dergree celcius to degree fahrenteits
#include<stdio.h>
#include<math.h>
float change(float degree_celcius);
int main()
{
	float degree_celcius,degree_fahrenheit;
	
	printf("Enter the number of degree_celcius : ");
	scanf("%f",&degree_celcius);
	
	degree_fahrenheit = (degree_celcius * 1.8) + 32;
	printf("\nDegree in fahrenheit %f\n\n",degree_fahrenheit);
}
float change(float degree_celcius)
{
	float degree_fahrenheit;
	degree_fahrenheit = (degree_celcius * 1.8) + 32;
	return 	degree_fahrenheit;
	
}
