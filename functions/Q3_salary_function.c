#include<stdio.h>
float salary(float net_pay,float gross_pay,float tax);
void main()
{
	int gross_pay,tax,net_pay;
	
	printf("Enter the gross_pay : ");
	scanf("%i",&gross_pay);
	
  
	if(gross_pay >=40000)
	    {tax = gross_pay * 0.3;
		printf("\nThis the tax -> %i\n\n",tax);
		}
		
	else if(gross_pay >=30000 )
	    {tax = gross_pay * 0.25;
		printf("\nThis the tax -> %i\n\n",tax);
		}
	
	else if(gross_pay >=20000 )
		{tax = gross_pay * 0.15;
		printf("\nThis the tax -> %i\n\n",tax);
		}
	
	else if(gross_pay >=10000 )
	    {tax = gross_pay * 0.1;
		printf("\nThis the tax -> %i \n\n",tax);
		}
	    
	else if(gross_pay >=0 <10000)
	    {tax = gross_pay * 0.0;
		printf("\nNo tax -> %d\n\n",tax);		    
        }
    printf("\nThis is the net_pay -> %i\n\n",net_pay);    
}        
float salary(float net_pay,float gross_pay,float tax)
{
  float salary;	
  net_pay = gross_pay - tax;
  return net_pay;
  
}

