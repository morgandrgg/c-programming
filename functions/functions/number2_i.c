#include<stdio.h>
#include<conio.h>

void main ()
{
	float m1,m2,m3;
	float per,avg;
	float total;
	
	printf(" enter the marks of m1 ");
	scanf("%f", &m1);
	printf(" enter the marks of m2 ");
	scanf("%f", &m2);
	printf("enter the marks of m3 ");
	scanf("%f", &m3);
	total= m1+m2+m3;
	printf("\n the total mark is %.2f ",total);
	per = (total/300)*100;
	avg = (total/3);
	printf("\n the percentage mark is : %.2f ", per);
	printf("\n the average mark  is: %.2f", avg);
	
	
	if(per>=80) printf("\n Grade : A");
	else if(per>=70) printf("\n Grade : B");
	else if(per>=60) printf("\n Grade : C");
	else if(per<50) printf("\n Grade:E ");

	getch();
}
