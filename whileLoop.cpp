//taking numbers from user and display the sum of even numbers
//and odd numbers with while loop

#include <iostream>
using namespace std;

int main(){
    int i, r, sum1=0, sum2=0,k;
    cout<<"How many number you want to enter? : ";
    cin>>i;
    int i_copy=i;
    int m=i;
    int z = i;
    
    int arr[i];
    r=0;
    while(i>0){
        cout<<"Enter a number: ";
        cin>>arr[r];
        r++; 
        i--;
    }

    r=0;
    k=0;
 
    while(z>0){
        cout<<(k+1)<<" number is "<<arr[k]<<endl;
        z--;
        k++;
    }

    while(m>0){
        if(arr[r]%2==0){
            sum1 = sum1 + arr[r];
        }
        else{
            sum2 +=arr[r];
        }
        m--;
        r++;
    }

    cout<<"addition of even number is: "<<sum1<<endl;
    cout<<"addition of odd number is: "<<sum2<<endl;

}             