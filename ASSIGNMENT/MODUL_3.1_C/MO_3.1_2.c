#include<stdio.h>

// Simple Calculator

void main()
{
	int a,b;
	
	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	
	printf("1) A = %d , B = %d\n\n\n",a,b);
	printf("2) Addition = %d\n",(a+b));
	printf("3) Substraction = %d\n",(a-b));
	printf("4) Multiplication = %d\n",(a*b));
	printf("5) Division = %.2f\n",(a/(float)b));
	printf("6) Modulo = %d\n",(a=(b*0)+a));
}