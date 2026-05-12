/*
    Program: Runtime Polymorphism using Virtual Function

    Description:
    This program demonstrates runtime
    polymorphism using virtual functions
    and base class pointers.

    - Virtual Function:
      A function declared using the virtual
      keyword in the base class which allows
      child classes to override it.

    - Runtime Polymorphism:
      Function call is decided during
      program execution based on the
      actual object type.

    In this program, a Parent class pointer
    points to both Parent and Child objects
    and calls the appropriate hello() function.
*/

#include<iostream>
using namespace std;

class Parent{
    public:
    virtual void hello(){
        cout<<"Hello\n";
    }
};

class Child : public Parent{
    public:
    void hello(){
        cout<<"Hello from child\n";
    }
};

int main(){
    Parent* p;  // store object's address
    Child c;
    Parent p1;

    p = &p1;  
    p -> hello();

    p = &c;

    p -> hello();

    return 0;
}