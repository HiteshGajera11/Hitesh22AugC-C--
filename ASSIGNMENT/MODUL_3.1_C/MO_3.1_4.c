#include<stdio.h>

void main()
{
	int p,r,t,si;
	
	printf("Please Enter Principle, Rate of interest & time period to find simple interest : \n");
	scanf("%d%d%d",&p,&r,&t);
	
	si=(p*r*t)/100;
	printf("Simple interest = %d",si);

}
