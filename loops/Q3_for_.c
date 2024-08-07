#include<stdio.h>
void main()
{
	int i,j,k=2;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=i;j++)
		{
			printf("%d ",k++);
		}
		printf("%d ",j);
		printf("\n");
    }
}
