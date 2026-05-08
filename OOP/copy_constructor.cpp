/*
    Program: Copy Constructor in C++

    Description:
    This program demonstrates the use of a
    custom copy constructor in Object Oriented
    Programming.

    - Copy Constructor:
      Creates a new object by copying data
      from another object.
*/

#include<iostream>
#include<string>

using namespace std;

class Teacher{

public:

    string name;
    double salary;

    // Parameterized constructor

    Teacher(string n, double sal){
        name = n;
        salary = sal;
    }

    // Custom copy constructor

    Teacher(Teacher &obj){

        cout<<"\nCustom copy constructor called\n";

        this->name = obj.name;
        this->salary = obj.salary;
    }

    void getinfo(){

        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){

    Teacher t1("Aryan Prasad", 900000.0);

    Teacher t2(t1);

    t2.getinfo();

    return 0;
}