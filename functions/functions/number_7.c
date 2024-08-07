#include<stdio.h>
void main()
{
	int l,w,h,r,b,choise,area;
	char rectangle,circle,right_angled;
	
	printf("Enter your choise");
	scanf("%d",&choise);
	
	printf("\n1 Enter the area of rectangle");
	scanf("%c",&rectangle);
	
	printf("\n2 Enter the area of circle");
	scanf("%c",&circle);
	
	printf("\n3 Enter the area of right-angled triangle");
	scanf("%c",&right_angled );
	
	
	if(choise=1);{
		area = l * w;}
    if (choise=2){
		area = 22.0/7.0 * r *r;
	}
    else if(choise=3 ){
		area = 0.5 * b * h ;
	}
	
	printf("\n%drectangle",area);
	printf("\n%dcircle",area);
	printf("\n%dright-angled triangle",area);
	
}
