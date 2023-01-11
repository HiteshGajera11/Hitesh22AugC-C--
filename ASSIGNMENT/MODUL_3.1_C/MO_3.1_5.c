#include<stdio.h>

void main()
{
	int a;
	printf("Enter Year to find this year is Leap year or not : ");
	scanf("%d",&a);
	
	if(a%4==0)
	{
		printf("\n%d is Leap Year \n",a);
	}
	else
		printf("%d is not Leap Year",a);


}





