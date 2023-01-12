#include<stdio.h>

void main()
{
	int n;
	
	printf("Enter any Number = ");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("%d is Even ",n);
	}
	else
		printf("%d is Odd");
}