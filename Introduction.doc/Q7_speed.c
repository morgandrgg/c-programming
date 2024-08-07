#include<stdio.h>
#include<math.h>
void main()
{
	float time_in_minutes,distance_in_meters,time_in_hours,distance_in_kilometer,speed;
	
	printf("Enter the distance_in_meters : "); 
	scanf("%f",&distance_in_meters);
	
	printf("Enter the time_in_minutes : ");
	scanf("%f",&time_in_minutes);
	
	time_in_minutes = time_in_minutes * 60;
	speed = (distance_in_meters/time_in_minutes) * 3.6;
	printf("\nSpeed in Kilometers per hour = %f km/hr%F\n\n",speed);
}
