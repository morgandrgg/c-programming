#include<stdio.h>
struct Rectangle
{
	float length,width,area,perimeter;
	
};
void main()
{
	struct Rectangle rect1;
	
	
	printf("Enter the length and width of the rectangle : ");
	scanf("%f %f", &rect1.length, &rect1.width);
	
	rect1.area=rect1.length * rect1.width;
	rect1.perimeter = (rect1.length + rect1.width)*2;
	printf("The area is %.2f\n", rect1.area);
	printf("The perimeter is %.2f\n", rect1.perimeter);
	printf("\n\n");
}
