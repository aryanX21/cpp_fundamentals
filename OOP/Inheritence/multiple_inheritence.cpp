/*
    Program: Multiple Inheritance in C++

    Description:
    This program demonstrates multiple
    inheritance in Object Oriented Programming.

    Multiple  inheritence - When a derived class inherits 
                            from more than one base class,
                            it is called multiple inheritance.

    - Student Class:
      Contains student-related information
      such as name and roll number.

    - Teacher Class:
      Contains teacher-related information
      such as subject and salary.

    - TA Class:
      Inherits both Student and Teacher classes,
      representing a Teaching Assistant.

    The program also demonstrates constructor
    chaining in multiple inheritance.
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
};

class Teacher{
    public:
    string subject;
    int salary;

    Teacher(string subject, int salary){
        this->subject = subject;
        this->salary = salary;
    }
};

class TA : public Student , public Teacher{

    public:

    TA(string name, int roll,string subject, int salary)

        : Student(name, roll),Teacher(subject, salary)
     {}

    void getinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no.: "<<roll<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary<<endl;
    }

};

int main(){

    TA ta1("Aryan Prasad", 38, "Astronomy", 50000);
    ta1.getinfo();   

    return 0;
}