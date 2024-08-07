#include <stdio.h>
#include <conio.h>
void main()
{
	int m1,m2,m3,answer;
	
	printf("Enter the number: ");
	scanf("%d%d%d",&m1,&m2,&m3);
	
	 
	answer = smallest (m1,m2,m3);
	
	printf("\nthe smallest number is %d");
	
	}
int smallest(int m1,int m2, int m3)
{
	int smallest;
	
	smallest = m1<m2?m1<m3? m1:m3:m2<m3?m2:m3;
	
}
