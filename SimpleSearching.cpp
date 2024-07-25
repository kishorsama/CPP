#include <iostream>
using namespace std;
class search{
    public:
    int n, a[];
    void input ();
    void binary_search(int a[], int n);
    void sortt(int a[], int n);
    void display(int a[], int n);
};
void search :: input(){
    int n;
    cout << "Enter the total number of students that attended the program: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter the roll numbers of the attended students: " << endl;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout << "Roll Numbers of student are: " << endl; 
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}

void search::display(int a[], int n){
    
    for(int i=0;i<n;i++)
        {
          cout<<a[i]<<" ";
        }
        cout<<endl;
    }

void search::sortt(int a[], int n){

   for(int i=0;i<n;i++)
      {
        for(int j=0;j<n-1;j++)
        {
         if(a[i]<a[j]) {
            int t=a[j];
            a[j]=a[i];
            a[i]=t;
            }
        }
    }
}

void search::binary_search(int a[], int n){
    int M, L = 0, H = n-1, key;
    cout << "Enter the roll number to find:  " << endl;
    cin >> key;

    do
    {
        M = (L + H) / 2;
        if (key == a[M])
        {
            cout << "Roll No. " << key << " was present." << endl;
            break;
        }
        else if (key > a[M])
        {
            L = M + 1;
        }
        else
        {
            H = M - 1;
        }

    } while (L <= H);
    if (L > H)
    {
        cout << "Student having roll no. " << key << " was absent." << endl;
    }
}

int main(){
    int a []
    int n = sizeof(a)/sizeof(a[0]);
    search s;
    s.input();
    s.sortt(a,n);
    s.display(a, n);
    s.binary_search(a,n);
    s.display(a, n);

}