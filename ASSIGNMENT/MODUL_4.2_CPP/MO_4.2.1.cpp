#include<iostream>
using namespace std;

int main()
{
	
	int a,b;
	int choice;
	
	cout<<"Enter A and B : ";
	cin>>a>>b;
	cout<<"A = "<<a<<",B = "<<b;
	
	cout<<"\n\nPress1. Addition \nPress2.Subtraction \nPress3.Multiplication \nPress4.Division";
	
	cout<<"\n\nEnter your Choice? : ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:cout<<"\nAddition is : "<<(a+b);
				break;
		case 2: cout<<"\nSubtraction is : "<<(a-b);
				break;
		case 3: cout<<"\nMultiplication is : "<<(a*b);
				break;
		case 4: cout<<"\nDivision is : "<<(a/(float)b);	
				break;
		default:cout<<"Invalid Choice";
			    break;
	}
	
	return 0;
}










