/*
    Program: Single Inheritance in C++

    Description:
    This program demonstrates single inheritance
    in Object Oriented Programming.

    - Parent Class:
      Contains common properties such as name and age.

    - Derived Class:
      Inherits properties of Parent class and adds
      its own property roll number.

    The program also demonstrates constructor
    chaining where base class constructor is
    called before derived class constructor.
*/

#include<iostream>
#include<string>

using namespace std;

class Parent{

    public:

    string name;
    int age;

    Parent(string name, int age){
        this -> name = name;
        this -> age = age;
    }
};

class Student : public Parent{

    public:

    int rollno;

    Student(string name, int age, int rollno) : Parent(name , age){
        this -> rollno = rollno;
    }


    void getinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll no.: "<<rollno<<endl;
    }
    
}; 

int main(){

    Student s1("Aryan Prasad", 20 , 38);
    s1.getinfo();

    return 0;
}