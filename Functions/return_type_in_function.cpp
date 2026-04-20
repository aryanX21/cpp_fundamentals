/*
    Program: Functions (void and return type)
    Description:
    This program demonstrates both types of functions in C++:

    - void function → does not return any value, directly prints output
    - return function → returns a value to the main function.
*/

#include<iostream>
using namespace std;

// void function (no return)
void add(int a, int b){
    cout<<"Sum: "<<a + b<<endl;
}

// function with return type
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

    // calling void function
    add(x, y);

    // calling return function
    cout<<"Minimum: "<<minimum(x, y)<<endl;

    return 0;
}