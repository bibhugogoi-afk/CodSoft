#include <iostream>
using namespace std;

int main()
{
    float a,b;
    char op;

    cout<<"Enter 1st number: ";
    cin>>a;

    cout<<"Enter 2nd number: ";
    cin>>b;

    cout<<"Enter the operator (+, -, *, /): ";
    cin>>op;

    switch(op)
    {
        case '+':
            cout<<"Addition of the two numbers = "<<a+b;
            break;

        case '-':
            cout<<"Substraction of the two numbers = "<<a-b;
            break;

        case '*':
            cout<<"Multiplication of the two numbers = "<<a*b;
            break;

        case '/':
            if(b!=0)
                cout<<"Division of the two numbers = "<<a/b;
            else
                cout<<"Division by 0 is not allowed";
            break;

        default:
            cout<<"Invalid choice of operator";
    }

    return 0;
}
