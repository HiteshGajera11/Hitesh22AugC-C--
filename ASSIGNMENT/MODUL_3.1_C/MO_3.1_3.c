#include<stdio.h>

void main()
{
	int r,l,w,b,h,choice;
	float area;
	
	printf("Please Enter Radious of the circle : ");
	scanf("%d",&r);
	printf("Please Enter Length and Width of the Rectangle : ");
	scanf("%d%d",&l,&w);
	printf("Please Enter base and height of the triangle : ");
	scanf("%d%d",&b,&h);
	
	printf("\n\nEnter 1 for Area of the Circle\n");
	printf("Enter 2 for Area of the Rectangle\n");
	printf("Enter 3 for Area of the Triangle\n");
	printf("\n\nPlease Enter your Choice : \n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : area=3.14*r*r;
				break;
		case 2 : area=l*w;
				break;
		case 3 : area=.5*b*h;
				break;
		default : printf("Please enter valid choice");
		
	}
	printf("\nThe Area is %f\n",area);
	
}