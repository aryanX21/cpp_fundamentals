/*
    Program: Hierarchical Inheritance in C++

    Description:
    This program demonstrates hierarchical
    inheritance in Object Oriented Programming.

    Heirarchial Inheritence - When more then one derived classes
                              inherits from  one base class,
                              it is called multiple inheritance.

    - Person Class:
      Contains common properties such as
      name and age.

    - Student Class:
      Inherits Person class and adds roll number.

    - Teacher Class:
      Inherits Person class and adds subject.

    The program demonstrates how multiple
    derived classes can inherit from a
    single base class.
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

class Student : public Person{
    public:
    int roll;

    Student(string name, int age, int roll) : Person(name, age){
           this->roll = roll;
    }

    void getinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll no.: "<<roll<<endl;   
    }
};

class Teacher : public Person{
    public:
    string subject;

    Teacher(string name, int age, string subject) : Person(name, age){

        this->subject = subject;
    }

    void getinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Subject: "<<subject<<endl;
    }
    
};

int main(){

    Student s("Aryan Prasad", 20, 38);

    Teacher t("Aryan Prasad", 20, "Astronomy");

    s.getinfo();
    cout<<endl;
    t.getinfo();
       
    return 0;
}