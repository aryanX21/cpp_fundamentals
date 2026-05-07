/*
    Program: Basic Class and Object Example

    Description:
    This program demonstrates basic Object Oriented
    Programming concepts using a Teacher class.

    - Class: User-defined blueprint for objects
    - Object:Instance of a class
    - Access Specifier: Controls accessibility of members
    - Data Members: Variables inside a class
    - Member Functions: Functions inside a class    
    - Dot (.) Operator: Used to access class members
    - Encapsulation: Wrapping data and functions together
*/

#include<iostream>
using namespace std;

class Teacher{   // creation of class

private:  // Access Specifier
    double salary;

public:
    string name;    // Data members
    string subject;

    void setSalary(double s){    // Member functions
        salary = s;
    }

    double getSalary(){
        return salary;
    }
};

int main(){

    Teacher t1;  // Object creation

    t1.name = "Aryan"; // Accessing data members using '.' (dot) operator
    t1.subject = "C++";
    t1.setSalary(250000);

    cout<<"Name: "<<t1.name<<endl;
    cout<<"Subject: "<<t1.subject<<endl;
    cout<<"Salary: "<<t1.getSalary()<<endl;

    return 0;
}