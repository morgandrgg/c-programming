#include<stdio.h>
struct test{
	float one,two,sub;
};
void main()
{
	struct test num1,num2,subtra;
	
	printf("Enter the two number: ");
	scanf("%f %f",&num1.one,&num2.two);
	
	if(num1.one > num2.two){
		subtra.sub = num1.one - num2.two;
		printf("\nThe first number subtracted by second number is %f",subtra.sub);
	}
	else if(num2.two > num1.one){
		subtra.sub = num2.two - num1.one;
		printf("\nThe second number  subtracted  by first number is %f",subtra.sub);
	}
	
}
