#include<stdio.h>
int main()
{
	printf("\nNumber Square  Cube");
	int i,square,cube;
	i = 2;
	
	do
	{
		square = i * i;
		cube = i * i * i;
		printf("\n%d  \t%d \t%d",i,square,cube);
		i = i + 1;
	}while(i <= 10);
	return 0;
	printf("\n\n");
	
}
