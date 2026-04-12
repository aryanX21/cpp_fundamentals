/*
    Program: For Loop (Syntax and Working)
    Description:
    This program demonstrates the syntax and working of a for loop in C++.

    Syntax:
    for(initialization; condition; update){
        // code to be executed
    }

    Explanation:
    - initialization → runs once at the beginning (starting point)
    - condition      → checked before every iteration
    - update         → executed after each iteration

    Flow:
    1. Initialization is executed once
    2. Condition is checked
    3. If condition is true → loop body executes
    4. Update statement runs
    5. Steps 2–4 repeat until condition becomes false

    Note:
    For loop is generally used when the number of iterations is known.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 1; i<=n ; i++){
        cout<<i<<" ";
    }

    return 0;
}