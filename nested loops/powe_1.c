//program that accept an interger and the power to be raised
#include<stdio.h>
int main()
{
   int base, exponent, the_exponent;
   int the_power = 1;
   
   printf("Enter a base value:> ");
   scanf("%d", &base);
   printf("Enter the power to raise the number to: ");
   scanf("%d", &exponent);

   the_exponent = exponent;
   
   while (the_exponent > 0)
   {
      the_power *= base;
      --the_exponent;
   }
    printf("\n%d power %d =  %d\n\n",base,exponent,the_power);
}

