#include<stdio.h>
#define PI 22/7.0
float  circle_area(float radius);
float circle_circumference(float radius);
void main()
{
	float cir,radi,ara;
	
	printf("Enter the radius: ");
	scanf("%f",&radi);
	
	cir = circle_circumference(radi);
	ara = circle_area(radi);
	
	printf("\nThe circumference is %f\n\n",cir);
	printf("\nThe area is %f\n\n",ara);	
}
float  circle_area(float radius)
{
	float area;
	area  =(PI * radius * radius);
	return area;
}
float circle_circumference(float radius)
{
	float circumference;
	circumference = (PI * (radius * 2));
	return circumference;
}
