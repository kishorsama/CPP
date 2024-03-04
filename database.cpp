#include <iostream>
using namespace std;

class books
{
	private:
	char *title, *publisher, *author;
	int stock;
	double price;
public:	
	void datain();
	void show();
	
	books();
};

books::books()
{
	author = new char [20];
	title = new char [30];
	publisher = new char [30];
	stock=0;
	price=0;

}


void books::datain()
{
	cout<<"Title of book: ";
	cin>>title;

	cout<<"Enter name of author: ";
	cin>>author;

	cout<<"Enter name of Publisher: ";
	cin>>publisher;

	cout<<"Enter stock of book: ";
	cin>>stock;

	cout<<"Enter price of book: ";
	cin>>price;
	cout<<endl;

}


void books::show()
{
	cout<<"Name of book: "<<title<<endl;
	cout<<"Name of author: "<<author<<endl;
	cout<<"Name of publisher: "<<publisher<<endl;
	cout<<"Price of book: "<<price<<endl;
	cout<<"How many books: "<<stock<<endl;
	cout<<endl;
}


int main()
{

	int n;
	cout<<endl;
	cout<<"Enter number of books: ";
	cin>>n;
	books obj[n];
	
	for(int i=0; i<n; i++)
	{
	cout<<"Enter details of book:"<<i+1<<endl;
	obj[i].datain();	
	}
	cout<<"--------------------------------------"<<endl;
	for(int i=0; i<n; i++)
	{
	cout<<"Entered details are:"<<i+1<<endl;
	obj[i].show();
	}
cout<<"--------------------------------------"<<endl;

return 0;
}
