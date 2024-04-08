#include <iostream>
using namespace std;

class shape
{
protected:
double w,l;

public:
virtual void indata()=0;
virtual void outdata()=0;
};

class rectangle : public shape
{
public :void indata()
	{
	cout<<"Enter value of width of rectangle: ";
	cin>>w;
	cout<<"Enter value of length of rectangle: ";
	cin>>l;
	}
public : void outdata()
	{
	double ar;
	ar=w*l;
	cout<<"Area of Rectangle: "<<ar<<endl; 
	}
};

class triangle : public shape
{
public :void indata()
	{
	cout<<"Enter value of height of triangle: ";
	cin>>w;
	cout<<"Enter value of base of triangle: ";
	cin>>l;
	}
public : void outdata()
	{
	double ttr;
	ttr=0.5*w*l;
	cout<<"Area of Triangle: "<<ttr<<endl; 
	}
};


class circle : public shape
{
public :void indata()
	{
	cout<<"Enter value of radius of circle: ";
	cin>>w;
	}
public : void outdata()
	{
	double ca;
	ca=3.14*w*w;
	cout<<"Area of Circle: "<<ca<<endl; 
	}
};

class square : public shape
{
public :void indata()
	{
	cout<<"Enter value of side of square: ";
	cin>>w;
	}
public : void outdata()
	{
	double sa;
	sa=w*w;
	cout<<"Area of square: "<<sa<<endl; 
	}
};

int main()
{
rectangle re;
triangle tr;
circle cr;
square sq;
shape *sh[4];
 sh[0]=&re;
 sh[1]=&tr;
 sh[2]=&cr;
 sh[3]=&sq;
 
int choise; 
cout<<"Enter your choise: ";
cin>>choise;

switch(choise)
{
case 1:
sh[0]->indata();
sh[0]->outdata();
break;

case 2:
sh[1]->indata();
sh[1]->outdata();
break;

case 3:
sh[2]->indata();
sh[2]->outdata();
break;

case 4:
sh[3]->indata();
sh[3]->outdata();
break;

default:
cout<<"You've entered wrong choise!!";
break;
}

return 0;
}
