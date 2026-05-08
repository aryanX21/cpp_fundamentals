/*
    Program: Constructor and Destructor in C++

    Description:
    This program demonstrates the use of
    constructor and destructor in Object
    Oriented Programming.

    - Constructor:
      Automatically called when an object is created.

    - Destructor:
      Automatically called when an object is destroyed.

    The program also shows that destructor
    executes after the program statements finish.
*/

#include<iostream>
using namespace std;

class Teacher{  

    public:

    Teacher(){
        cout<<"Constructor called"<<endl;
    }

    ~Teacher(){
        cout<<"Destructor called"<<endl;
    }
};


int main(){ 

    Teacher t1; 
    int x = 10;
    cout<<x<<endl;

    return 0;
}