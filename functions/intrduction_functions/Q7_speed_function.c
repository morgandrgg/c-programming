//This program is used to calculate the speed in km/hr using functions.
#include<stdio.h>
#include<math.h>
float km(float time_in_minutes,float distance_in_meters);
void main()
{
	float time_in_minutes,distance_in_meters,time_in_hours,distance_in_kilometer,speed;
	
	printf("Enter the distance_in_meters : "); 
	scanf("%f",&distance_in_meters);
	
	printf("Enter the time_in_minutes : ");
	scanf("%f",&time_in_minutes);
	
	speed = km(time_in_minutes,distance_in_meters);
	
	printf("\nSpeed in Kilometers per hour = %f km/hr%F\n\n",speed);
}
float km(float time_in_minutes,float distance_in_meters)
{
	float speed;
	time_in_minutes = time_in_minutes * 60;
	speed = (distance_in_meters/time_in_minutes) * 3.6;
	return speed;
}
