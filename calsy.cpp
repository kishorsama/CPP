#include <iostream>
using namespace std;

int main ()
{
double num1, num2;
char op, repeat;

start:

cout<<"enter number 1: ";
cin>>num1;
cout<<"(+,-,*,/): ";
cin>>op;
cout<<"enter number 2: ";
cin>>num2;

switch (op)
	{
	case '+':
	cout<<num1<<"+"<<num2<<"="<<(num1+num2)<< endl;
	break;
	
	case '-':
	cout<<num1<<"-"<<num2<<"="<<(num1-num2)<< endl;
	break;
	
	case '*':
	cout<<num1<<"*"<<num2<<"="<<(num1*num2)<< endl;
	break;
	
	case '/':
	cout<<num1<<"/"<<num2<<"="<<(num1/num2)<< endl;
	break;
	
	default:
	cout<<"Wrong operator bro!!" << endl;
	
	}
cout<<"Wanna go again? (Y/N): ";
cin>>repeat;

if(repeat=='Y' || repeat=='y')
goto start;

else cout<<"Thank you";
return 0;
}
