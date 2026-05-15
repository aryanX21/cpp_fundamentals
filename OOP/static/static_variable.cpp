/*
    Program: Static Variable in C++

    Description:
    This program demonstrates the use
    of static variables in Object
    Oriented Programming.

    - Static Variable:
      A variable that belongs to the
      class itself rather than individual
      objects.

    - Use of Static Variable:
      Used to store data shared by all
      objects of a class.

    In this program, a static variable
    count keeps track of the total
    number of Student objects created.

*/

#include<iostream>
using namespace std;

class Student{

public:

    string name;  

    static int count;  // Static variable shared by all objects

    Student(string name){

        this->name = name;

        count++;
    }

    void getinfo(){

        cout<<"Name: "<<name<<endl;
    }
};

int Student::count = 0;  // Static variable definition

int main(){

    Student s1("Aryan");
    Student s2("Rahul");
    Student s3("Ankit");

    s1.getinfo();
    s2.getinfo();
    s3.getinfo();

    cout<<"\nTotal Objects Created: "
        <<Student::count<<endl;

    return 0;
}