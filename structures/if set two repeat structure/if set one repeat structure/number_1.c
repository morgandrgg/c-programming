#include<stdio.h>
struct beers{
	int a,b;
};
void main()
{
	struct beers choise,bottles;
	
	printf("\n\t****Jamal and Daughter****");
	printf("\n\tbeerbrand            prize");
	printf("\n\t--------------------------");
	printf("\n\t1)tusker                100/=");
	printf("\n\t2)Pilsner			      120/=");
	printf("\n\t3)Smirnoff Ice		   140/=");
	printf("\n\t4)White Cap		        90/=");
	
	printf("\n\nEnter your choise:  ");
	scanf("%d",&choise.a);
	
	if(choise.a==1){
		printf("\nHow many bottles of tusker you need: ");
		scanf("\n%d",&bottles.b);
		printf("\n%dThe amount of tusker bottles you need is ksh.%d",bottles.b,(bottles.b*100));
	}
	else if(choise.a==2){
		printf("\nHow many bottles of Pilsner you need: ");
		scanf("\n%d",&bottles.b);
		printf("\n%dThe amount of Pilsner bottles you need is ksh.%d",bottles.b,(bottles.b*100));
	}
	else if(choise.a==3){
		printf("\nHow many bottles of Smirnoff Ice you need: ");
		scanf("\n%d",&bottles.b);
		printf("\n%dThe amount of Smirnoff Ice bottles you need is ksh.%d",bottles.b,(bottles.b*100));
	}
	else if(choise.a==4){
		printf("\nHow many bottles of White Cap you need: ");
		scanf("\n%d",&bottles.b);
		printf("\n%dThe amount of White Cap bottles you need is ksh.%d",bottles.b,(bottles.b*100));
	}
	else if(choise.a==1,2,3,4){
		printf("There is an error,try it again");
	} 
}
