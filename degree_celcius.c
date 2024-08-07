#include<stdio.h>
void main()
{   
    int i, degree_celcius;
	float  temp[7], hottest, coolest, sum ,average;
	
	for (i = 0; i < 7; i++)
	{	
	printf("Enter the noon temperature for %d :> ", i+1);
	scanf("%f",&temp[i]);
    }
	
	hottest = coolest = temp[0];

	for (i = 0; i < 7; i++)
	{
		sum = sum + temp[i];
		average = sum / 7.0;
		if (temp[i] > hottest)
			hottest = temp[i];
		else if(temp[i] < coolest)
			coolest = temp[i];
	}
	printf("\n\nThe hottest temperature is %.2f",hottest);
	printf("\nThe coolest temperature is %.2f",coolest);
	printf("\nThe average temperature %.2f\n\n",average);
}

