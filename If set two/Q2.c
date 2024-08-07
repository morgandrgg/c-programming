#include<stdio.h>
void main()
{
	float salary,tax,net_salary;
	
	printf("Enter the salary : ");
	scanf("%f",&salary);
	
	if(salary >= 20000){
		tax = 0.15 * salary;
		net_salary = salary - tax;
		printf("\nThis the tax : %.2f",tax);
		printf("\n\nThis is the net_salary : %.2f",net_salary);
	     }
	else if(salary < 20000){
		tax = 0.1 * salary;
		net_salary = salary - tax;
		printf("\nThis is the tax : %.2f",tax);
		printf("\n\nThis is the net_salary : %.2f",net_salary);
	     }
	else if(salary <= 10000){
		printf("\nTHE IS NO TAX.");
		printf("\n\nThis is the net_salary : %.2f",net_salary);
	}	      
}
