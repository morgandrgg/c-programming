#include<stdio.h>
float volume(float l,float b,float h)
{
	return (l*b*h);
}
 
int main()
{
        float l,b,h,v;
        
        printf("enter l : ");
		scanf("%f",&l);
		
		printf("enter b: ");
		scanf("%f",&b);
		
		printf("enter h ");
		scanf("%f",&h);
		
	        v=volume(l,b,h);
	        
		printf("volume: %f\n",v);
		return 0;
}
