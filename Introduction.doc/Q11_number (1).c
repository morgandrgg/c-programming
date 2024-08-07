#include<stdio.h>
#include<math.h>
void main()
{
	float number,square_root,cube_root,square,cube;
	
	printf("Enter the the number : ");
	scanf("%f",&number);
	
	square_root = sqrt(number);
	cube_root = cbrt(number);
	square = number * number;
	cube = pow(number,3);
	
	printf("\n\nThe square_root of %f is %f\n",number,square_root);
	printf("\n\nThe cube_root of %f is %f\n",number,cube_root);
	printf("\n\nThe square of %f is %f\n",number,square);
	printf("\n\nThe cube of %f is %f\n",number,cube);
}
