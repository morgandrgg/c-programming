#include<stdio.h>
void main()
{
	float number_one,number_two,number_three,sum,product,average;
	
	printf("Enter the three numbers -> ");
	scanf("%f%f%f",&number_one,&number_two,&number_three);
	
	sum = number_one + number_two + number_three;
	printf("\nThis is the sum of the three numbers %f\n\n",sum);
	
	product = number_one * number_two * number_three;
	printf("\nThis is the product of the three numbers %f\n\n",product);
	
	average = sum/3.0;
	printf("\nThis is the average pf the three numbers %f\n\n",average);
}
