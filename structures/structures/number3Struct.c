#include<stdio.h>
struct Employee {
	char emp_no[10];
	char f_name[20];
	char s_name[20];
	int no_of_kids;
	float height;
	float basic_salary;
};
void main()
{
	struct Employee emp_1;
	
	emp_1.no_of_kids = 4;
	
	printf("Enter your first and last name: ");
	scanf("%s %s",&emp_1.f_name,&emp_1.s_name);
	printf("Enter your height: ");
	scanf("%f",&emp_1.height);
	printf("Enter your basic salary: ");
	scanf("%f",&emp_1.basic_salary);
	
	system("cls");
	
	printf("***************************");
	printf("\nName		:%s %s",emp_1.f_name,emp_1.s_name);
	printf("\nHeight		:%.2f",emp_1.height);
	printf("\nNo of kids	:%d",emp_1.no_of_kids);
	printf("\nBasic salary	:%.2f",emp_1.basic_salary-1500);
	
}
