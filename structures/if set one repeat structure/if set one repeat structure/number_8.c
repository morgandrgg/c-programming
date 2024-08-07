#include<stdio.h>
struct distance{
	float spd,spdlmt,r_spd;
};
void main()
{
	struct distance speed,speedlimit,rl_speed;
	
	printf("\nEnter your speed: ");
	scanf("%f",&speed.spd);
	
	printf("\nEnter the speedlimit: ");
	scanf("%f",&speedlimit.spdlmt);
	
	rl_speed.r_spd = speed.spd - speedlimit.spdlmt;
	
	if(rl_speed.r_spd <=30  ){
		printf("\n___________________________________");
		printf("\nThe speed in km/hr is %f",speed.spd);
		printf("\n__________________________________");
		printf("\nThe charge is %f ksh 2500",rl_speed.r_spd);
	}
	else if(rl_speed.r_spd > 30){
		printf("\n___________________________________");
		printf("\nThe speed in km/hr is %f",speed.spd);
		printf("\n__________________________________");
		printf("\nThe charge is %f ksh 4000",rl_speed.r_spd);
}
	else if (speed.spd <= rl_speed.r_spd){
		printf("\n___________________________________");
		printf("\nThe speed in km/hr is %f",speed.spd);
		printf("\n__________________________________");
		printf("\nThere is no charge ",rl_speed.r_spd);
	}
	

}
