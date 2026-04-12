/*
    Program: While Loop (Print 1 to n)
    Description:
    This program demonstrates the syntax and working of a while loop in C++.

    Syntax:
    initialization;
    while(condition){
        // code
        update;
    }

    Flow:
    1. Initialization is done before the loop
    2. Condition is checked
    3. If true → loop body executes
    4. Update statement runs
    5. Steps repeat until condition becomes false

    Note:
    While loop is used when the number of iterations is not fixed.
*/

#include<iostream>
using namespace std;

int main(){

    int n, i = 1;

    cout<<"Enter n: ";
    cin>>n;

    while(i <= n){
        cout<<i<<" ";
        i++;
    }

    return 0;
}