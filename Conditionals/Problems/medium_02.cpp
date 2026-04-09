/*
    Program: Find Largest of Three Numbers
    Description:
    This program takes three numbers as input from the user
    and finds the greatest among them.

    It also checks if all three numbers are equal.

    Problem Statement:
    Write a program to find the largest of three numbers
    using conditional statements.
*/

#include<iostream>
using namespace std;

int main(){

    int num1, num2, num3;

    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;

    if(num1 == num2 && num2 == num3){
        cout<<"All three numbers are equal"<<endl;
    }
    else if(num1 >= num2 && num1 >= num3){
        cout<<num1<<" is the greatest"<<endl;
    }
    else if(num2 >= num1 && num2 >= num3){
        cout<<num2<<" is the greatest"<<endl;
    }
    else {
        cout<<num3<<" is the greatest"<<endl;
    }
    return 0;
}