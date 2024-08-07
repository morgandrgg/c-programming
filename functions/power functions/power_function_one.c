#include<stdio.h>
int get_power(int number,int exp);
int main()
{
	int base1, base2, base3, exponent1, exponent2, exponent3;
	int the_power1, the_power2, the_power3;
	
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
	
	printf("\n\nData entry for the third set:");
    printf("\n%d power %d =  %d",base1,exponent1,the_power1);
	printf("\n%d power %d =  %d",base2,exponent2,the_power2);
	printf("\n%d power %d =  %d\n\n",base3,exponent3,the_power3);
}
int get_power(int number,int exp)
{
	int answer = 1, the_exponent;
	the_exponent = exp;
	
	system("cls");
	
	while (the_exponent > 0)
	{
		answer *= number;
		--the_exponent;
	}
	
	return answer;
}

