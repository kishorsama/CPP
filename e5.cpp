#include <iostream>
using namespace std;

int main()
{
cout<<"How many numbers you you want to enter? :";
int j;
cin>>j;

int k [j];
for (int i=0; i<j; i++)
	{
		cout<<"Enter "<<i<<" number :";
		int x;
		cin>>x;
		k[i]=x;
	}
	
int *ptr=k;
for (int i=0; i<j; i++)
{
cout<<i<<" number is "<<*(ptr+i)<<endl;
}
return 0;
}
