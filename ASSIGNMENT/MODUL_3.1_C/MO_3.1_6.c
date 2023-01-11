#include<stdio.h>

void main()
{
	int days,years,weeks;
	
	printf("Please Enter Year to find days : ");
	scanf("%d",&years);
	printf("Please Enter Days to find Years : ");
	scanf("%d",&days);
	
//	printf("Years = %d , Days = %d ",years,days);
	
	years = years*365;
	days = days/365;
	
	printf("Total Days of the Years = %d\n",years);
	printf("Total Years of the Days = %d\n",days);
	
}