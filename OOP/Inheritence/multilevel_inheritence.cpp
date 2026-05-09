/*
    Program: Multilevel Inheritance with Constructor Chaining

    Description:
    This program demonstrates multilevel inheritance
    and constructor chaining in C++.

    - Parent Class:
      Initializes common properties such as
      name and age.

    - Student Class:
      Inherits Parent class and initializes roll number.

    - GradStudent Class:
      Inherits Student class and initializes
      research area.
*/

#include<iostream>
#include<string>

using namespace std;

class Parent{

    public:

    string name;
    int age;

    Parent(string name, int age){
        this->name = name;
        this->age  = age;
    }
};

class Student : public Parent{

    public:

    int rollno;

    Student(string name, int age, int rollno) : Parent(name , age){
        this->rollno = rollno;
    }
}; 

class GradStudent : public Student{

    public:
    string ResearchArea;

    GradStudent(string name, int age, int rollno, string ResearchArea) : Student(name, age, rollno){
       
        this -> ResearchArea = ResearchArea;
    }

    void getinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll no: "<<rollno<<endl;
        cout<<"Research Area: "<<ResearchArea<<endl;
    }
};

int main(){

    GradStudent gs1("Aryan Prasad", 20 , 38 , "Quantum Physics");
    gs1.getinfo();

    return 0;
}