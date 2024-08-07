#include<stdio.h>
#include<conio.h>

void main ()
{
	float m1,m2,m3;
	float total,avg;
	
	
	printf(" enter the marks of m1 ");
	scanf("%f", &m1);
	printf(" enter the marks of m2 ");
	scanf("%f", &m2);
	printf("enter the marks of m3 ");
	scanf("%f", &m3);
	
	total= m1+m2+m3;
	printf("\n the total mark is %.2f ",total);
	
	avg = (total/3);
	printf("\n the average mark  is: %.2f", avg);
	
	
	if(avg>=80) printf("\n Grade : A");
	else if(avg>=70) printf("\n Grade : B");
	else if(avg>=60) printf("\n Grade : C");
	else if(avg<50) printf("\n Grade:E ");

	getch();
}
