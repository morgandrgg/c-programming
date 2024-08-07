#include<stdio.h>
void main()
{
	int value;
	value = 0;
	 printf("Enter the value : ");
	 scanf ("%d",&value);
	 
	 if(value ==  (value ++))
	 {
	 	printf("This an even number.",value);	
	 }
	 else if(value != (value + 1 ));
	 {
	 	printf("This is an odd number.",value);
	 }
//	 default:
//	 {
//	 	printf("INVALID CHOICE.");
//	 }
}
