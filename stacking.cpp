#include <iostream>
using namespace std;

int choice, top, ele, i, num;
int stack[5];

void push()
{
    if (top == 5)
    {
        cout << "Overflow of stack" << endl;   
    }
    else{
    top++;
    cout<<"Enter a element";
    cin>>ele;
    stack[top] = ele;
    }
}

void pop()
{   
    if (top == -1)
    {
        cout << "Stack is empty" << endl;    
    }
    else{
    stack[top]=0;
    }
}

void display()
{
    for(int i=top;i>=0;i--){
    cout << stack[i]<<endl;
    }
}

int main()
{
    top = -1;
    num = 5;
    while (num > 0)
    {
    cout << " 1.Push\n 2.Pop\n 3.Display\n 4.exit\n:";
    cin >> choice;
        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            top--;
            break;

        case 3:
            display();
            break;

        case 4:
            break;

        default:
            cout << "Entered wrong choice!"<<endl;
            break;
        }
        num--;
    }
}