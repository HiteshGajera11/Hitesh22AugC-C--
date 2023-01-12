#include<stdio.h>

void main()
{
	int choice,n1,n2;
	
	printf("Enter N1 = ");
	scanf("%d",&n1);
	printf("Enter N2 = ");
	scanf("%d",&n2);
	
	printf("Enter 1 Addition\n");
	printf("Enter 2 Substraction\n");
	printf("Enter 3 Multiplication\n");
	printf("Enter 4 Division\n");
	printf("Enter 5 Modulo\n");
	printf("\nEnter your Choice\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : printf("Addition is %d \n",(n1+n2));
				break;
		case 2 : printf("Substraction is %d \n",(n1-n2));
				break;
		case 3 : printf("Multiplication is %d \n",(n1*n2));
				break;
		case 4 : printf("Division is %.2f \n",(n1/(float)n2));
				break;
		case 5 : printf("Modulo is %d \n",(n1=(n2*0)+n1));
				break;
		default : printf("Invalid Choice\n");
				break;
	}
}