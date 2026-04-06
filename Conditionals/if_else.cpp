/*
    Program: if-else Statement
    Description:
    Executes the 'if' block when the condition is true, and 
    executes 'else' block when the condition is false
*/

#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter the number: ";
    cin>>num;

    if (num > 0) {
        cout<<"ENTERED NUMBER IS POSITIVE\n";
    }

    else {
        cout<<"ENTERED NUMBER IS NEGATIVE\n";
    }

    return 0;

}