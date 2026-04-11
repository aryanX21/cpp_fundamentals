/*
    Program: Simple Calculator using Switch Case
    Description:
    This program takes two numbers and an operator as input
    and performs the corresponding arithmetic operation.

    It uses switch-case to handle different operations
    and also checks for division by zero.

    Problem Statement:
    Write a program to perform basic arithmetic operations
    (+, -, *, /) using switch-case.
*/

#include<iostream>
using namespace std;

int main(){
    double a,b;
    char op;

    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    cout<<"Enter operation: ";
    cin>>op;

    switch(op){
    case '+':
     cout<<a+b<<endl;
     break;

    case '-':
     cout<<a-b<<endl;
     break;

    case '*':
     cout<<a*b<<endl;
     break;

    case '/':
     if(b == 0){
        cout<<"Can't divide by zero"<<endl;
     }
     else{
     cout<<a/b<<endl;
     }
     break;

    default:
     cout<<"You entered wrong operator!\nChoose from (+,-,*,/)"<<endl;
    }

    return 0;

}