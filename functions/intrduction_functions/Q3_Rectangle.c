#include<stdio.h>
float rect_area(float length, float width);
float rect_perimeter(float length,float width);
void main()
{
	float area,length,width,perimeter;
	
	printf("Enter the length and width -> ");
	scanf("%f%f",&length,&width);
	
     area = rect_area(length,width);
	 perimeter = rect_perimeter(length,width);
	
	printf("\nThe area is %f\n\n",area);
	printf("\nThe perimeter is %f\n\n",perimeter);
}
float rect_area(float length,float width)
{
	float area;
	area = length * width;
	return area;
	
}
float rect_perimeter(float length,float width)
{
	float perimeter;
	perimeter = length + length + width + width;
	return perimeter;
	
}
