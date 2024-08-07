#include <stdio.h>
void main()
{
	int i,fibonacci;
	float Fb[i],sum;
	
begin:
	printf("How many fibonacci series do you want to work with:> ");
	scanf("%d",&fibonacci);
	
	if(fibonacci < 0 || fibonacci > 10)
	{
		system("cls");
		printf("\a\a\aThe series should be between 1 and 10\n\n");
		goto begin;
	}
	
	for(i = 0; i < fibonacci; i++)
	{
		Fb [i] = Fb [i-1] + Fb [i-2];
		if (Fb[i] > 1)
			Fb[i] = 1;
		else if(Fb[i] < 0)
			Fb[i] = 0; 
	}
	for(i = 0; i < fibonacci; i++)
	{
		Fb[i] = Fb[i-1] + Fb[i-2];
		if(Fb[i] > 1)
			Fb[i] = 1;
		else if(Fb[i] < 0)
			Fb[i] = 0; 
	}
	printf("\n\n Fibonacci terms.");
	printf("\n------------------");
	
	for(i=0;fibonacci;i++)
		printf("\nFibonacci %d:		%.2f",i+1,Fb[i]);
		printf("\nThe total is %.2f",sum);
}
