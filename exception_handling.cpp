/*
    Program: Exception Handling in C++

    Description:
    This program demonstrates exception
    handling using try, throw, and catch.

    - Exception Handling:
      A mechanism used to handle runtime
      errors and prevent abnormal program
      termination.

    - try Block:
      Contains code that may generate
      an exception.

    - throw Keyword:
      Used to throw an exception.

    - catch Block:
      Handles the thrown exception.

    In this program, division by zero
    is handled using exception handling.
*/

#include<iostream>
using namespace std;

int main(){
    double a,b,c;

    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    try{
        if(b == 0){
            throw b;
        }

        c = a/b;
        cout<<a<<" / "<<b<<" = "<<c<<endl;
    }

    catch(double x){

        cout<<"Division by "<<x<<" is not allowed"<<endl;

    }

    return 0;
}