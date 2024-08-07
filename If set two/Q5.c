#include<stdio.h>
void main()
{
	float marks,one,two,three,four,five,average,sum;
	
	printf("Enter the marks scored in the five units : ");
	scanf("%f%f%f%f%f",&one,&two,&three,&four,&five);

    sum = one + two + three + four +five;
    average = sum/5;
    
    if(average >=75 <=100)
    {
    	printf("Distinction",average);
	}
	else if(average >=65 <75)
	{
		printf("Credit",average);
	}
	else if(average >=50 <65)
	{
		printf("Pass",average);
	}
	else if(average >=0 <50)
	{
		printf("Fail",average);
	}
}
