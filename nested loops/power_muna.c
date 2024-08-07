#include<stdio.h>
int main()
{
	int base1, base2, base3, exponent1, exponent2, exponent3, the_exponent;
	int the_power1 = 1, the_power2 = 1, the_power3 = 1;
	
	printf("Data entry for the first set:\n");
	printf("--------------------------------\n");
	printf("Enter a base value:> ");
	scanf("%d", &base1);
	printf("Enter the power to raise the number to: ");
	scanf("%d", &exponent1);
	
	printf("\n\nData entry for the second set:\n");
	printf("--------------------------------\n");
	printf("Enter a base value:> ");
	scanf("%d", &base2);
	printf("Enter the power to raise the number to: ");
	scanf("%d", &exponent2);
	
	printf("\n\nData entry for the third set:\n");
	printf("--------------------------------\n");
	printf("Enter a base value:> ");
	scanf("%d", &base3);
	printf("Enter the power to raise the number to: ");
	scanf("%d", &exponent3);
	
	//Calculation for set 1
	the_exponent = exponent1;
	
	while (the_exponent > 0)
	{
		the_power1 *= base1;
		--the_exponent;
	}

//Calculation for set 2
	the_exponent = exponent2;
	
	while (the_exponent > 0)
	{
		the_power2 *= base2;
		--the_exponent;
	}
	
	//Calculation for set 3
	the_exponent = exponent3;
	
	while (the_exponent > 0)
	{
		the_power3 *= base3;
		--the_exponent;
	}
	
	printf("\n%d power %d =  %d",base1,exponent1,the_power1);
	printf("\n%d power %d =  %d",base2,exponent2,the_power2);
	printf("\n%d power %d =  %d\n\n",base3,exponent3,the_power3);
}

