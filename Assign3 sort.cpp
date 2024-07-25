#include<iostream>
using namespace std;
class Myclass
{
int n,a[100];
    public:
    void input();
    void linear_search();
    void binary_search();
    void sort();

    

};
void Myclass::input()
{
 int i;
 cout<<"Enter the total number of students that attended the program: "<<endl;
 cin>>n;
 cout<<"Enter the roll numbers of the attended students: "<<endl;

 for(i=0;i<n;i++)
 {
     cin>>a[i];
 }
 cout<<"Roll Numbers of student are: "<<endl;
 for(i=0;i<n;i++)
 {
 cout<<a[i]<<endl;
 }
 }
 
 void Myclass::linear_search()
 {
 int i,key;
 cout<<"Enter the roll number to find:  "<<endl;
 cin>>key;
    for(i=0;i<n;i++)
   {
     if(key==a[i])
     {
     cout<<"Student having roll no. "<<key<<" was present."<<endl;
     break;
     }
   }
     if(i==n)
     {
      cout<<"Student having roll no. "<<key<<" was absent."<<endl;
      
     }
 }
 void Myclass:: sort()
 {
  int i,j,t;
   for(i=0;i<n;i++)
      {
        for(j=0;j<n-1;j++)
        {
         
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
      for(i=0;i<n;i++)
      {
        cout<<a[i]<<" ";
        
      }
      cout<<endl;
      }
 }
  void Myclass:: binary_search()
    
    { sort();
    
      int a[100],n,key,L=0,H=n-1,M,i,j,temp;
      cout<<"Enter the roll number to find:  "<<endl;
      cin>>key;
     
      do
      {
        M=(L+H)/2;
        if(key==a[M])
        {
          cout<<"Roll No. "<<key<<" was present."<<endl;
          break; 
        }
        else if(key>a[M])
        {
          L=M+1;
        }
        else
        {
          H=M-1;
        }
        
      }
      while(L<=H);
      if(L>H)
      {
        cout<<"Student having roll no. "<<key<<" was absent."<<endl;
        

      }
    }
    

 int main()
 {
 Myclass ob;
 int choice;

 
 cout<<"1. Linear Search "<<endl;
 cout<<"2. Binary Search"<<endl;
 cout<<"SELECT YOUR CHOICE-> "<<endl;
 cin>>choice;
 
 
 switch(choice)
 {
   case 1: ob.input();
           ob.linear_search();
           break;
   case 2: ob.input();
           ob.binary_search();
           break;


           break;
  

}
 return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
