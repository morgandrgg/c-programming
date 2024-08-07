//This program is used to calculate the area and circumference of a circle using structures.
#include<stdio.h>
#define PI 3.14
struct circle
{
	int radi;
};
void main()
{
	struct circle cir,area;
	int radius;
	printf("Enter the the radius of the circle : ");
	scanf("%d",&radius);
	
	 cir.radi = PI * radius * 2;
	 area.radi = PI * radius * radius;
	
	printf("This is the circumference : %d",cir);
	printf("\nThis is the area : %d",area);
	
}
