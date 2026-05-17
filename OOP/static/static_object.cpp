/*
    Program: Static Object in C++

    Description:
    This program demonstrates the use
    of static objects in Object
    Oriented Programming.

    - Static Object:
      An object that is created only once
      and exists throughout the entire
      program execution.

    - Use of Static Object:
      Used when an object needs to retain
      its state between function calls.

    In this program, the static object
    inside the check() function is created
    only once even though the function
    is called multiple times.
*/

#include<iostream>
using namespace std;

class Demo{

public:

    Demo(){

        cout<<"Constructor called"<<endl;
    }

    ~Demo(){

        cout<<"Destructor called"<<endl;
    }
};

void check(){

    static Demo d; // Static object

    cout<<"Function executed"<<endl;
}

int main(){

    check();
    check();
    check();

    return 0;
}