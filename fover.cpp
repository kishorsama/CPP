#include <iostream>
using namespace std;

class vol
{
public:
int volume(int a)
	{
	 return (a*a*a);
	}

int volume(int r, int h)
	{
	return (3.14*r*r*h);
	}

int volume(float s)
	{
	return (1.33*3.14*s*s*s);
	}
};

int main()
{
vol ob;

int a,r,h;
float s;

int choise;
cout<<"Enter Choise: 1-cube, 2-cylinder, 3-Sphere ";
cin>>choise;

switch(choise)
{
case 1:
cout<<"Enter Value of edge of cube: ";
cin>>a;
cout<<"Volume of Cube is "<<ob.volume(a)<<endl;
break;

case 2:
cout<<"Enter value of radius of cylinder: ";
cin>>r;
cout<<"Enter value of height of cylinder: ";
cin>>h;

cout<<"Volume of Cylinder is "<<ob.volume(r,h)<<endl;

break;

case 3:
cout<<"Enter value of radius of sphere: ";
cin>>s;
cout<<"Volume of Sphere is "<<ob.volume(s)<<endl;
break;

default:
cout<<"Wrong choise!!!";
break;
}
return 0;
}
