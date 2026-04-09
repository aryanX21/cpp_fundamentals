/*
    Program: Ternary Operator (Comparison of Two Numbers)
    Description:
    This program takes two numbers as input from the user
    and compares them.

    First, it checks if both numbers are equal using if-else.
    If they are not equal, it uses the ternary operator
    to find which number is greater.

    The ternary operator is a shortcut for if-else
    used for simple conditions.

    Syntax - (condition) ? expression_if_true : expression_if_false;
*/

#include<iostream>
using namespace std;

int main(){

    int a, b;

    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    if(a == b){
        cout<<"Both numbers are equal";
    }
    else{
        cout<<((a > b) ? "a is greater than b" : "b is greater than a");
    }

    return 0;
}