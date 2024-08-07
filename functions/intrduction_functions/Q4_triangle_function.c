//this program is a function program used to calculate the area of a traingle.
#include<stdio.h>
float tri_area(float base,float height);
void main()
{
	float base,height,area;
	
	printf("Enter the base and the height : ");
	scanf("%f%f",&base,&height);
	
	area = tri_area(base,height);
	printf("\nThis is the area %f\n\n",area);
}
float tri_area(float base,float height)
{
	float area;
	area = 0.5 * height * base;
	return area;
}
