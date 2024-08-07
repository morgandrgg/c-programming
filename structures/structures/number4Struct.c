#include<stdio.h>
struct Employee {
	char e_no[10];
	char s_name[20], m_name[20];
	float b_salary, allowance;
	
};
void main()
{
	struct Employee empl[20];
	int number, i;
	float tax_amount, gross_salary, net_salary;
	
	printf("Enter the number of employees to work with: ");
	scanf("%d",&number);
	
	for(i=0; i<=number; i++)
	{
		printf("Enter the middle and surname: ");
		scanf("%s %s",empl[i].m_name,empl[i].s_name);
		printf("Enter the number: ");
		scanf("%d",&empl[i].e_no);
		printf("Enter the basic salary: ");
		scanf("%f",&empl[i].b_salary);
		printf("Enter the allowances: ");
		scanf("%f",&empl[i].allowance);
		printf("\n\n");	
	}
	for(i=0; i<=number; i++)
	{
		if(gross_salary >=20000){
			gross_salary = empl[i].b_salary + empl[i].allowance;
			tax_amount = 0.15 * gross_salary;
			net_salary=gross_salary - tax_amount;
			printf("****Employee Details***");
			printf("\nName			:%s %s",empl[i].m_name,empl[i].s_name);
			printf("\nNumber			:%d",empl[i].e_no);
			printf("\nBasic salary		:%.2f",empl[i].b_salary);
			printf("\nAllowances		:%.2f",empl[i].allowance);
			printf("\nGross salary		:%.2f",gross_salary);
			printf("\nNet salary		:%.2f",net_salary);
		}
		else if(gross_salary >=10000 && gross_salary <=20000){
			gross_salary = empl[i].b_salary + empl[i].allowance;
			tax_amount = 0.10 * gross_salary;
			net_salary=gross_salary - tax_amount;
			printf("****Employee Details***");
			printf("\nName			:%s %s",empl[i].m_name,empl[i].s_name);
			printf("\nNumber			:%d",empl[i].e_no);
			printf("\nBasic salary		:%.2f",empl[i].b_salary);
			printf("\nAllowances		:%.2f",empl[i].allowance);
			printf("\nGross salary		:%.2f",gross_salary);
			printf("\nNet salary		:%.2f",net_salary);
		}
		else if(gross_salary>=0 && gross_salary<=10000){
			gross_salary = empl[i].b_salary + empl[i].allowance;
			tax_amount = 0.05 * gross_salary;
			net_salary=gross_salary - tax_amount;
			printf("****Employee Details***");
			printf("\nName			:%s %s",empl[i].m_name,empl[i].s_name);
			printf("\nNumber			:%d",empl[i].e_no);
			printf("\nBasic salary		:%.2f",empl[i].b_salary);
			printf("\nAllowances		:%.2f",empl[i].allowance);
			printf("\nGross salary		:%.2f",gross_salary);
			printf("\nNet salary		:%.2f",net_salary);
		}
	}
}
