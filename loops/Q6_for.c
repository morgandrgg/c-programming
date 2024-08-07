#include<stdio.h>
void main()
{
	int i,j;
	
	for(i=1;i<=6;i++)
	{
	    for(j=-6;j<=12;j++)	
	    {
	    	if(j==6||i==12||j==6)
	    	printf("*");
	    	else
	    	printf(" ");
		}
		printf("\n");
	}
}
