/*
    Program: Constructors in C++

    Description:
    This program demonstrates the use of
    non-parameterized and parameterized constructors
    in Object Oriented Programming. It has the same 
    name as of the class. 

    - Default Constructor:
      Called automatically when object is created
      without arguments.

    - Parameterized Constructor:
      Initializes object using given values.

    Syntax -> 

        class ClassName{

        public:

         ClassName(){
        // constructor body
        }

        };

*/

#include<iostream>
#include<string>

using namespace std;

class Teacher{  

    private:
    double salary;   

    public:

    // non-parameterised constructor
    Teacher(){
        cout<<"This is a constructor"<<endl;
    }

    // Parameterised constructor
    Teacher (string n, double sal){   
        name = n;
        salary = sal;
    }

    string name; 

    void getinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }

};


int main(){ 

    Teacher t1; // Non parameterised Constructor called

    cout<<endl;

    Teacher t2("Aryan_Prasad", 900000.0);
    t2.getinfo();     

    return 0;
}