#include<stdio.h>
void main()
{
	float value,x,y;
	
	printf("Enter the value : ");
	scanf("%f",&value);
	
	if(x > 5)
	{
		y = (4 * x * x * x) + (2 * x) - 6;
		printf("This is the value of y : %.2f",y);
	}
	else if(x < 5)
	{
		y = (3 * x *x) - (4 * x) + 12;
		printf("This is the value of y : %.2f",y);
	}
	else if(x = 5)
	{
		y = (6 * x) - 5;
		printf("this the value of y : %.2f",y);
	}
	else if(x != 5, 5, 5)
	{
		printf("INVALID CHOICE OF X");
		printf("PLEASE TRY AGAIN WITH A REVELEVANT VALUE OF X!!!");
	}
	
}
