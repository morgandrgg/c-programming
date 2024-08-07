#include<stdio.h>
struct num 
{
	int no;
}; 
void main()
{
	struct num num_1, num_2, num_3;
	int sum, product, avg;
	
	printf("Enter the three numbers :" );
	scanf("%d %d %d", &num_1, &num_2, &num_3);
	
	sum = num_1.no + num_2.no + num_3.no;
	product = num_1.no * num_2.no * num_3.no;
	avg = (num_1.no + num_2.no + num_3.no) / 3.0;
	
	printf("\nSum of the numbers is %d", sum);
	printf("\nThe product of the numbers is %d", product);
	printf("\nThe average is %d", avg);
	
	printf("\n\n");
}
