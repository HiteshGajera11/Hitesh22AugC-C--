/*Write a program of Addition, Subtraction, Division, Multiplication using constructor.*/

#include<iostream>
using namespace std;
int main()
{
    int num1, num2, x;
    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2;
    x = num1+num2;
    cout<<endl<<"Addition Result = "<<x<<endl;
    x = num1-num2;
    cout<<endl<<"Subtraction Result = "<<x<<endl;
    x = num1*num2;
    cout<<endl<<"Multiplication Result = "<<x<<endl;
    x = num1/num2;
    cout<<endl<<"Division Result = "<<x<<endl;
    return 0;
}
