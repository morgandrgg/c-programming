#include<stdio.h>
void main()
{
	int i;
	float num [7],big,small,sum=0,average;
	
	for(i = 0;i < 7;i++)
	{
		printf("Enter the noon temperature in degrees celcius from Monday to Sunday:> ");
		scanf("%f",&num[i]);
	}
	big = small = num[0];
	
	for(i = 0;i < 7;i++)
	{
		sum = sum + num[i];
		if(num[i] > big)
			big = num[i];
		else if(num[i]<small)
			small=num[i];	
	}
	average = sum/7;
	
	printf("\nThe  highest temperature is %.2f.",big);
	printf("\nThe lowest temperature is %.2f.",small);
	printf("\nThe sum is %.2f and average is %.2f\n\n.",sum,average);
}
