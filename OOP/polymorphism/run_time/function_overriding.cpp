/*
    Program: Function Overriding in C++

    Description:
    This program demonstrates function
    overriding in Object Oriented Programming.

    - Function Overriding:
      Redefining a parent class function
      in the child class using the same
      function name and parameters.

    In this program, the Child class overrides
    the show() function of the Parent class.
*/

#include<iostream>
using namespace std;

class Parent{

public:

    void show(){

        cout<<"Show function of Parent class"<<endl;
    }
};

class Child : public Parent{

public:

    void show(){

        cout<<"Show function of Child class"<<endl;
    }
};

int main(){

    Parent p;
    Child c;

    p.show();
    c.show();

    return 0;
}