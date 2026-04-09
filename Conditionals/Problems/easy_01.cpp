/*
    Program: Check Number Type
    Description:
    This program takes a number as input from the user
    and determines whether the number is positive, negative, or zero.

    Problem:
    Write a program that accepts a number from the user
    and checks:
    - if the number is positive
    - if the number is negative
    - if the number is zero
*/

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter number: ";
    cin>>num;

    if(num == 0){
        cout<<"Entered number is zero"<<endl;
    }

    else if(num > 0){
        cout<<"Entered number is Positive"<<endl;
    }

    else {
        cout<<"Entered number is Negative"<<endl;
    }

    return 0;
    
}