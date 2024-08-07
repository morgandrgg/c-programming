#include<stdio.h>
float smallest(float a,float b,float c);
void main()
{
	float a,b,c,answer;
	
	printf("Enter the values of a,b and c : ");
	scanf("%f%f%f",&a,&b,&c);
	
	answer = smallest(a,b,c);
	
	printf("\nThis is the smallest number %.2f : ",answer);
}
float smallest(float a,float b,float c)
{
	float smallest;
	smallest = a<b?a<c? a:c:b<c?b:c;
	 return smallest;
}
