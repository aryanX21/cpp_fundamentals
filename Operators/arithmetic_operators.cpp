/*
    Program: Arithmetic Operators in C++
    Description:
    Demonstrates basic arithmetic operations.
*/

#include<iostream>
using namespace std;

int main(){

    int a,b;

    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    cout<<"---Arithmetic Operators---\n"<<endl;

    cout<<"Sum = "<<a + b<<endl;
    cout<<"Difference: "<<a - b<<endl;
    cout<<"Product: "<<a * b<<endl;

    // Note: b should not be 0
    cout<<"Quotient: "<<a / b<<endl; //will only give integer value and decimal part will be discarded because a and b are of integer type
    cout<<"Remainder: "<<a % b<<endl;

    return 0;
}