#include<stdio.h>
int main( )
{
	int i;
	start:
	float num[5],sum = 0,average;
	
	for(i = 0; i < 5;i++)
	{
		printf("\nEnter mark %d:> ",i + 1);
		scanf("%f",&num[i]);
	}
	
	for (i = 0; i < 5; i++)
	{
		sum = sum + num[i];
	}
	average = sum/5;
	
	printf("\nThe sum is %5.2f and average is %.2f.\n\n",sum,average);
	
}goto start;
