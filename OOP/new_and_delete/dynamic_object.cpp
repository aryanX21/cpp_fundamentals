/*
    Program: Dynamic Object using new and delete

    Description:
    This program demonstrates dynamic memory
    allocation for objects using new and
    delete operators.

    The program creates a Student object
    dynamically using a pointer, accesses
    its member function using the arrow
    operator, and then releases the memory.
*/

#include<iostream>
#include<string>

using namespace std;

class Student{

public:

    string name;
    int roll;

    Student(string name, int roll){

        this->name = name;
        this->roll = roll;
    }

    void getinfo(){

        cout<<"Name: "<<name<<endl;
        cout<<"Roll no.: "<<roll<<endl;
    }
};

int main(){

    Student* s1 = new Student("Aryan Prasad", 38);    // Dynamic object creation

    s1->getinfo();

    delete s1;

    cout<<"\nMemory released"<<endl;

    return 0;
}