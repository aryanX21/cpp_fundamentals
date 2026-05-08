/*
    Program: this Pointer in C++

    Description:
    This program demonstrates the use of the
    this pointer in Object Oriented Programming.

    - this Pointer:
      Refers to the current object and is used
      to differentiate object variables from
      constructor parameters having the same name.

    Concepts Used:
    - Class and Object
    - Parameterized Constructor
    - this Pointer
    - Member Functions
*/

#include<iostream>
#include<string>

using namespace std;

class Teacher{

public:

    string name;
    double salary;

    // this pointer points to the current object

    Teacher(string name, double salary){

        this->name = name;
        this->salary = salary;
    }

    /*  this pointer is not required here because
        parameter names and object variable names are different

    Teacher (string n, double sal){   
        name = n;
        salary = sal;
    }

    */

    void getinfo(){

        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){

    Teacher t1("Aryan Prasad", 900000.0);

    t1.getinfo();

    return 0;
}

    
