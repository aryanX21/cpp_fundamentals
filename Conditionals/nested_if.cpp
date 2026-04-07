/*
    Program: Nested if Statement
    Description:
    This program demonstrates the use of nested if statements.

    A number is taken as input from the user.
    First, it checks whether the number is positive or negative.
    
    Inside each condition, another if statement is used 
    to check whether the number is even or odd.

    This shows how one if statement can be placed inside another 
    to perform multiple checks step by step.
*/


#include<iostream>

using namespace std;

int main(){

    int num;

    cout<<"Enter number: ";
    cin>>num;

    if(num > 0){
        cout<<"Number is Positive"<<endl;

        if(num % 2 == 0){
            cout<<"Number is Even"<<endl;
        }

        if(num % 2 != 0){
            cout<<"Number is Odd"<<endl;
        }
    }

    if(num < 0){
        cout<<"Number is Negative"<<endl;

        if(num % 2 == 0){
            cout<<"Number is Even"<<endl;
        }

        if(num % 2 != 0){
            cout<<"Number is Odd"<<endl;
        }
    }

    if(num == 0){
        cout<<"Number is Zero"<<endl;
    }
 
    return 0;
}