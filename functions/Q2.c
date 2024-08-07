#include<stdio.h>
float average(float one,float two,float three);
void main()
{
	float one,two,three,avg;
	
	printf("Enter the marks in the three subjetcs : ");
	scanf("%f%f%f",&one,&two,&three);
	
      avg = average(one,two,three);
	  
	printf("This is the average of three numbers"); 
	
	if(avg >=80<=100)
	{
		printf("A",avg);
	  }  
	else if(avg>=70<80)
	{
     	printf("B",avg);
	}
	else if(avg >=60<70) 
	{
     	printf("C",avg);
	}
	else if(avg>=50<60)  
	{
     	printf("D",avg);
	}
	else if(avg>=0<50)
	  
	{
     	printf("E",avg);
	}
}
float average(float one,float two,float three)
{
	float average;
	 average = (one + two + three) / 3.0;
	 //average = (sum / 3.0);
	 return average;
	 
}
