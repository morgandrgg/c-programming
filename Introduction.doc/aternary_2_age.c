#include<stdio.h>
void main()
{
	int age;
	
	printf("Enter the age : ");
	scanf("%d",&age);
	
	(age >=18 && age <=100) ? printf("\nYou can vote") : printf("\nYou can not vote");
}
