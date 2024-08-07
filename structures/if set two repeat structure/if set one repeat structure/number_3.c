#include<stdio.h>
struct money{
	
	float gross,tax,net;
};
void main()
{
	struct money gross_pay,tax_amount,net_pay;
	
	printf("\nEnter the amount of gross pay: ");
	scanf("%f",&gross_pay.gross);
	
	if(gross_pay.gross >= 40000){
		tax_amount.tax = 0.30*gross_pay.gross;
		net_pay.net = gross_pay.gross - tax_amount.tax;
		printf("\nThe amount of tax amount is ksh.%f",tax_amount.tax);
		printf("\nThe amount of net pay is ksh.%f",net_pay.net);
	}
	else if(gross_pay.gross >= 30000 && gross_pay.gross <= 40000){
		tax_amount.tax = 0.25*gross_pay.tax;
		net_pay.net = gross_pay.gross - tax_amount.tax;
		printf("\nThe amount of tax amount is ksh.%f",tax_amount.tax);
		printf("\nThe amount of net pay is ksh.%f",net_pay.net);
		
	}
	else if(gross_pay.gross >= 20000 && gross_pay.gross <= 30000){
		tax_amount.tax = 0.15 * gross_pay.gross;
		net_pay.net = gross_pay.gross - tax_amount.tax;
		printf("\nThe amount of tax amount is ksh.%f",tax_amount.tax);
		printf("\nThe amount of net pay is ksh.%f",net_pay.net);
		
	}
	else if(gross_pay.gross >= 10000 && gross_pay.gross <= 20000){
		tax_amount.tax = 0.10 * gross_pay.gross;
		net_pay.net = gross_pay.gross - tax_amount.tax;
		printf("\nThe amount of tax amount is ksh.%f",tax_amount.tax);
		printf("\nThe amount of net pay is ksh.%f",net_pay.net);
		
	}
	else if(gross_pay.gross < 10000){
		tax_amount.tax =0 * gross_pay.gross;
		net_pay.net = gross_pay.gross - tax_amount.tax;
		printf("\nThe amount of tax amount is ksh.%f",tax_amount.tax);
		printf("\nThe amount of net pay is ksh.%f",net_pay.net);
		
	}
}
