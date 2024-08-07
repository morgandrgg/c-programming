#include<stdio.h>
struct test{
	int number;
};
void main()
{
  struct test num ;
  
  printf("Please enter the number: ");
  scanf("%d",&num.number);
  
  if(num.number > 0){
  	printf("\nThe number is positive");
  }
  else if(num.number < 0){
  	printf("\nThe number is negative");
  }
  else if(num.number = 0){
  	printf("\nThe number is zero");
  }
}
