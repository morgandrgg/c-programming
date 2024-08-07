#include<stdio.h>
int main()
{
	int choice,length,width,radius,area,perimeter;
	
	start:
	
	printf("\n\n\t\t\t***MENU***");
	printf("\n\n\t\t\t___________");
	printf("\n\n\t1) Calculate the area and the perimeter of a RECTANGLE ? ");
	printf("\n\n\t2) Calculate the area and the primeter of a CIRCLE ?");
	printf("\n\n\t\tSELECT YOUR CHOICE : ");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1: {
		         printf("\n\tEnter the length : ");
		        scanf("%d",&length);
				printf("\n\tEnter the width : ");
				scanf("%d",&width);
				
				area = length * width;
				printf("\n\n\t\tThis is the area of the %d length and the % width rectangle -> %d",length,width,area);
				
				perimeter = length + length + width + width;
				printf("\n\t\tThis is the perimeter of the %d length and the %d width of the rectangle -> %d",length,width,perimeter);
			break;}
		case 2: {
			    printf("\n\tEnter the radius of the circle : ");
		        scanf("%d",&radius);
		        
		        area = (22.0/7 * radius * radius);
		        printf("\n\t\tThis %d radius gives an area of -> %d",radius,area);
		        
		        perimeter = 22.0/7 * (radius + radius);
		        printf("\n\t\tThis %d radius gives a perimeter of -> %d",radius,perimeter);      		    
		    break;}
		default:
		        printf("INVALID CHOICE");	    
	}
                printf("\n\n___________________________THANK YOU FOR USING OUR PROGRAM_______________________________________");
    goto start;            
    return 0;
    
}
