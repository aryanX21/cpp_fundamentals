/*
    Program: Hybrid Inheritance in C++

    Description:
    This program demonstrates hybrid inheritance
    using virtual inheritance in C++.

    - Hybrid Inheritance:
      Combination of more than one type of inheritance
      such as hierarchical and multiple inheritance.

    - Virtual Inheritance:
      Prevents multiple copies of the same base class
      from being inherited, avoiding ambiguity.

    - Person Class:
      Base class containing common properties
      such as name and age.

    - Student and Teacher Classes:
      Inherit Person class using virtual inheritance.

    - Display_info Class:
      Inherits both Student and Teacher classes,
      combining multiple and hierarchical inheritance.

    The program also demonstrates how virtual
    inheritance solves ambiguity caused by
    multiple copies of the base class.

*/

#include<iostream>
#include<string>

using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Student : virtual public Person{
    public:
    int roll;

    Student(string name, int age, int roll) : Person(name, age){
           this->roll = roll;
    }

    void getinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
           
    }
};

class Teacher : virtual public Person{
    public:
    string subject;

    Teacher(string name, int age, string subject) : Person(name, age){

        this->subject = subject;
    }
 
};

class Display_info : public Teacher, public Student{

    public:

    Display_info(string name, int age, string subject, int roll) :

          Person(name, age),
          Teacher(name, age, subject),
          Student(name, age, roll)
      {}

    void getinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Roll no.: "<<roll<<endl;
    }
};

int main(){

    Display_info i("Aryan Prasad", 20, "Computer Science", 38);
    i.getinfo(); 

    return 0;
}