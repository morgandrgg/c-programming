#include<stdio.h>
void main()
{
    int base,exponent;
    int power = 1;
    int i;
    
    printf("\n\n\t\tEnter a base : ");
    scanf("%d",&base);
    printf("\n\n\t\tEnter the exponent : ");
    scanf("%d",&exponent);
    
    for(i=1; i<=exponent; i++)
      {
      power = power * base;
      }
    printf("\n\n\t\t%d power %d =  %d",base,exponent,power);
}
