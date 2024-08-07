#include<stdio.h>
void main()
{
	float base,height,area;
	
	printf("Enter the base and the height : ");
	scanf("%f%f",&base,&height);
	
	area = 0.5 * base * height;
	printf("\nThis is the area %f\n\n",area);
}
