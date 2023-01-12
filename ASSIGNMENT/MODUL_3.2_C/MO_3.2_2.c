#include<stdio.h>

void main()
{
	int x,y;
	
	printf("Enter X = ");
	scanf("%d",&x);
	printf("Enter Y = ");
	scanf("%d",&y);
	
	printf("\nBefore Swapping \n X = %d , Y = %d\n",x,y);
	
	x = x+y;
	y = x-y;
	x = x-y;
	
	printf("\nAfter Swapping \n X = %d , Y = %d",x,y);
	
	
}