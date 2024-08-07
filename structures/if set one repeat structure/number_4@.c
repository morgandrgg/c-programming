#include<stdio.h>
struct que{
	int number_1,number_2,answear,test;
};
int main()
{
	struct que n1, n2, ans, test;
	
	printf("Enter two numbers: ");
	scanf("%d %d",&n1.number_1,&n2.number_2);
	
	switch(test.test){
		
		case n1 > n2:
			ans.answear = n1.number_1 - n2.number_2;
			printf("\n%d - %d = %d",n1.number_1,n2.number_2,ans.answear);
			break;
		case n2 > n1:
			ans.answear = n1.number_1/n2.number_2;
			printf("\n%d / %d = %d",n2.number_2,n1.number_1,ans.answear);
			break;
		default:
				ans.answear = n1.number_1 + n2.number_2;
				printf("\n%d + %d = %d",n1.number_1,n2.number_2,ans.answear);
	}
}
