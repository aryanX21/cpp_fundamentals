/*
    Program: Static Function in C++

    Description:
    This program demonstrates the use
    of static functions in Object
    Oriented Programming.

    - Static Function:
      A function that belongs to the
      class itself rather than objects.

    - Use of Static Function:
      Used to access static members
      shared by all objects.

    Static functions can access only
    static members of a class.

    In this program, the static function
    showCount() displays the total number
    of Student objects created.
*/

#include<iostream>
using namespace std;

class Student{

public:

    string name;

    static int count;

    Student(string name){

        this->name = name;

        count++;
    }  

    static void showCount(){     // Static function

        cout<<"Total Objects Created: "
            <<count<<endl;
    }
};

int Student::count = 0;

int main(){

    Student s1("Aryan");
    Student s2("Rahul");
    Student s3("Ankit");   

    Student::showCount();  // Calling static function using class name

    return 0;
}