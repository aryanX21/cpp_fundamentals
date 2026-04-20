/*
    Program: Functions with Parameters and Return Type
    Description:
    This program demonstrates the use of functions with parameters,
    arguments, and return type in C++.

    - Parameters → variables used in function definition to receive values
    - Arguments  → actual values passed during function call
*/

#include<iostream>
using namespace std;

// Function with parameters

int minimum(int a, int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}

int main(){

    int x = 10, y = 20;

    // Function calls with arguments
    cout<<"Minimum: "<<minimum(x, y)<<endl;

    return 0;
}