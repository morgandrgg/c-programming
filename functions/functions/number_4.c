#include<stdio.h>
int eo(int);
void main()
{
	int num;
	
	printf("Please enter the number : ");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("The number enter is and evennumber \n",num);
		
	}else
	printf("The number enter is and oddnumber \n",num);
}
int eo (int a)
{
	int b;
	a=b;
	return(b%2==0);
}
