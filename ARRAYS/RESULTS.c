#include<stdio.h>
#include<stdlib.h>
void main( ) 
{
	int i, total_number,flag=0,counter=0;
	float  mark[100], highest, lowest, sum = 0,average;
	
begin:
	printf("How many units were you doing this semester:> ");
	scanf("%d",&total_number);
	
	if(total_number < 5 || total_number > 8)
	{
		system("cls");
		printf("\a\a\aThe number of units have to be between  and 8\n\n");
		goto begin;
	}
	
	for (i = 0; i < total_number; i++)
	{
		printf("Enter the mark for student %d:> ",i + 1);
		scanf("%f",&mark[i]);
	}

	highest = lowest = mark[0];

	for (i = 0; i < total_number; i++)
	{
		sum = sum + mark[i];
		if (mark[i] > highest)
			highest = mark[i];
		else if(mark[i] < lowest)
			lowest = mark[i];
	}
	average = sum / total_number;
		
	for (i = 0; i < total_number; i++)
	{
		if(mark[i] < 50)
		{
			counter++;
		}
		else
		{
			
		}
	}
	if (counter > 0)
	{
		printf("\n\nFailed in %d unit.",counter);
	}
	else
	{
		printf("\n\nPassed in %d unit.",counter);
	}
	printf("\n\nThe highest mark is %.2f",highest);
	printf("\nThe lowest is %.2f",lowest);
	printf("\nThe total is %5.2f and average is %.2f\n\n",sum,average);
}
