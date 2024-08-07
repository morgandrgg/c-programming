//Calculate area and circumference of a circle using functions//
#include<stdio.h>
const float PI = 3.142;
float area(float radius);
float circum(float radius);
void main() 
{
	 float radius;
	 
		 printf("Enter radius: ");
		 scanf("%f", &radius);
		 
		 printf("Area : %.3f\n", area(radius));
		 
		 printf("Circumference: %.3f\n", circum(radius));
		 
		 getch();
		}
		float area(float radius)
		 {
		  return PI * radius * radius;
		}
		
		float circum(float radius) 
		{
		  return 2 * PI * radius;
}

