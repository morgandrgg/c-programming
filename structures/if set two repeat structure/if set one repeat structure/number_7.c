#include<stdio.h>
#include<math.h>
#define PI 22.0/7
struct math{
	double l, w, b, h, r, a, p;
	char ch;
};
int main()
{
	struct math length, width, base, height, radius, area, perimeter;
	struct math chr;
	
	haha:
	
	printf("*****Choose your interest from the listed*****\n");
	printf("________________________________________________\n\n");
	printf("1) Area and perimeter of rectangle \n");
	printf("2) Area and perimeter circle \n");
	printf("3) Area and perimeter of a right-angled triangle\n");
	printf("\nEnter your choice (1, 2, 3): ");
	scanf("%s" ,&chr.ch);
	
	if (chr.ch == '1'){
		printf("\n\n\tYou have selected the first choice.\n");
		printf("\tEnter the length and width of the rectangle: ");
		scanf("%lf %lf",&length.l,&width.w);
		
		area.a = length.l * width.w;
		perimeter.p = 2*(length.l + width.w);
		
		printf("\n\n\tThe area of the rectangle is %.2lf \n\tThe perimeter of the rectangle is %.2lf.\n\n\n",area.a,perimeter.p);
	
	}
	else if (chr.ch == '2'){
		printf("\n\n\tYou have selected the second choice.\n");
		printf("\tEnter the radius of the circle: ");
		scanf("%lf",&radius.r);
		
		area.a = PI*(pow(radius.r, 2));
		perimeter.p = PI*(radius.r + radius.r);
		
		printf("\n\n\tThe area of the circle is %.2lf \n\tThe perimeter of the circle is %.2lf.\n\n\n",area.a,perimeter.p);
		
	}
	else if (chr.ch == '3'){
		printf("\n\n\tYou have selected the third choice.\n");
		printf("\tEnter the base and height of the triangle: ");
		scanf("%lf %lf" ,&base,&height);
		
		area.a = 0.5*(base.b * height.h);
		perimeter.p = base.b + height.h + sqrt(pow(base.b,2)+pow(height.h,2));
		
		printf("\n\n\tThe area of the triangle is %.2lf \n\tThe perimeter of the triangle is %.2lf.\n\n\n",area.a,perimeter.p);
		
	}
	else 
		printf("\n\n\tError! please select among the list.");
	goto haha;
	getchar();
}
