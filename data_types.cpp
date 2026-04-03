/*
    Program: Data Types in C++
    Description:
    This program demonstrates basic data types in C++ 
    and how to use them.

    - int     -> stores whole numbers
    - float   -> stores decimal numbers (less precision)
    - double  -> stores decimal numbers (more precision)
    - char    -> stores a single character
    - bool    -> stores true or false
    - string  -> stores multiple characters
*/


#include<iostream>
#include<string>
using namespace std;

int main(){
    
    // Integer
    int a = 10;

    // Float
    float b = 12.4;

    // Double
    double c = 13.6784;

    // Character
    char d = 'A';

    // Boolean (true prints 1 and False prints 0)
    bool e = true;

    // string 
    string f = "Aryan";
    
    cout<<"Integer: "<<a<<endl;

    cout<<"Float: "<<b<<endl;

    cout<<"Double: "<<c<<endl;

    cout<<"Character: "<<d<<endl;

    cout<<"Bool: "<<e<<endl;
    
    cout<<"String: "<<f<<endl;
    
    return 0;
}