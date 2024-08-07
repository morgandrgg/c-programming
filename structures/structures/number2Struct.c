#include<stdio.h>
struct Details {
	char adm_no[10];
	char name[20];
	int age;
	float height;
	float fee_balance;
};
void main()
{
	struct Details student;
	
	printf("Enter your name: ");
	scanf("%s",&student.name);
	printf("Enter your height: ");
	scanf("%f",&student.height);
	printf("Enter your fee balance: ");
	scanf("%f",&student.fee_balance);
	
	student.age = 25;
	
	system("cls");
	
	printf("\n***Student details***");
	printf("\nName		:%s",student.name);
	printf("\nAge		:%d",student.age);
	printf("\nHeight		:%.2f",student.height);
	printf("\nFee balance	:%.2f",student.fee_balance+12500);
}
