#include <iostream>
using namespace std;

int top = -1;

//created precedence of operators
int precedence(char opi)
{
    if (opi == '=')
        return 1;
    if (opi == '-' || opi == '+')
        return 2;
    if (opi == '*' || opi == '/')
        return 3;
    return 0;
}

//function to push in to stack
void push(char something, char stackk[])
{
    //check stack is not overflowing
    if (top < 8) 
    {
        top++;
        stackk[top] = something;
    }
}

int main()
{
    //taking input of expression
    string inputExp;
    cout<<"Enter a expression: ";
    cin>>inputExp;
    //calculating length of string
    int stringlen = inputExp.length();

    //declaring stack
    char stack[stringlen];

    for (int i = 0; i < inputExp.length(); i++)
    {
        //extracting each character from string using indices
        char extract = inputExp[i]; 

        // check if extracted char is operator
        if (extract == '/' || extract == '*' || extract == '+' || extract == '-' || extract == '=')
        {
            // check if precedence of current operator is greater than
            //operator which is in stack
            if (precedence(extract) > precedence(stack[top]))
            {
                push(extract, stack); // Use push to add the current operator
            }

            //if precedence is lower, print operator from stack and push current one
            else
            {
              cout<<stack[top];
              stack[top]=extract;
            }
        }

        else
        {
            cout << extract;
        }
    }

    // print remaining operators from stack if any
    for(int i =top; i>=0;i--)
    {
        cout << stack[top];
        top--;
    }

    cout << endl;
    return 0;

}
