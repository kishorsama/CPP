#include <iostream>
using namespace std;

template <class T>
void indata(T arr, int n)
{
	for (int i=0; i<n;i++)
	{
	cin>>arr[i];
	}
}

template <class T>
void sort(T arr, int n)
{	
	int min;
	

for (int i=0; i<n-1; i++)
{
	min=i;
	for (int j=i+1; j<n; j++)
	{
		if (arr[j]<arr[min]);
		{
			min=j;
		}
	}
	swap (arr[min],arr[i]);
}

}


template <class T>
void show(T arr, int n)
{
		for (int i=0; i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
	
}

int main()
{
int n,s;
cout<<"Enter the integer array size: ";
cin>>n;
int arr[n];
cout<<"Enter the element of array: "<<endl;
indata(arr,n);
sort(arr,n);
cout<<"Sorted array is: "<<endl;
show(arr,n);

cout<<"Enter the float array size: ";
cin>>s;
float flarr[s];
cout<<"Enter the element of array: "<<endl;
indata(arr,s);
sort(arr,s);
cout<<"Sorted array is: "<<endl;
show(arr,s);
return 0;
}
