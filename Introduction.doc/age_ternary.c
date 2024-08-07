#include<stdio.h>
void main()
{
	int age,ans;
	
	char phrase[]="You can vote";
	char value[]="You can not vote";
	
	printf("Enter your age :");
	scanf("%d",&age);
	
	ans = age >= 18 ? phrase : value;
	
	    printf("\n%s.\n\n",ans);
	
}
