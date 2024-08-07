#include<stdio.h>
void main()
{
	float a,b,c,result;
	
	printf("Enter the three numbers : ");
	scanf("%f%f%f",&a,&b,&c);
	
	if (c!=0)
	 {
	 result = (a * b)/c;
	 printf("\nThis is the result %.2f : ",result);
	 }
	else
	 	result = a + b;
	 	printf("\nThis is the result %.2f : ",result);
	  
}
