/*
    Program: Divisibility Check (5 and 11)
    Description:
    This program takes an integer as input from the user
    and checks whether the number is divisible by 5, 11, both, or neither.

    Problem Statement:
    Write a program to check whether a given number is divisible by:
    - both 5 and 11
    - only 5
    - only 11
    - neither 5 nor 11

    The program should display the appropriate message based on the condition.
*/

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter number: ";
    cin>>num;

    if(num % 5 == 0 && num % 11 == 0){
        cout<<"Number is divisible by both 5 and 11"<<endl;
    }
    else if(num % 5 == 0){
        cout<<"Number is divisible by 5"<<endl;
    }
    else if(num % 11 == 0){
        cout<<"Number is divisible by 11"<<endl;
    }
    else{
        cout<<"Number is neither divisible by 5 nor by 11"<<endl;
    }

    return 0;
}