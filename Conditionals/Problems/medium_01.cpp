/*
    Program: Grade Calculator
    Description:
    This program takes marks of three subjects as input,
    calculates the percentage, and assigns a grade based on it.

    Problem Statement:
    Write a program to calculate percentage and assign grades
    according to given ranges. Also handle invalid input.
*/

#include<iostream>
using namespace std;

int main(){

    int m1, m2, m3;
    double per;

    cout<<"Enter Marks of 3 subjects (0-100): ";
    cin>>m1>>m2>>m3;

    if(m1 < 0 || m2 < 0 || m3 < 0 || m1 > 100 || m2 > 100 || m3 > 100){
        cout<<"Invalid marks! Please enter values between 0 and 100"<<endl;
    }
    else{
        per = (m1 + m2 + m3) / 3.0;
        cout<<"Percentage Obtained: "<<per<<"%"<<endl;

        if(per > 95){
            cout<<"GRADE: A++"<<endl;
        }
        else if(per > 90){
            cout<<"GRADE: A+"<<endl;
        }
        else if(per > 80){
            cout<<"GRADE: A"<<endl;
        }
        else if(per > 70){
            cout<<"GRADE: B+"<<endl;
        }
        else if(per > 60){
            cout<<"GRADE: B"<<endl;
        }
        else if(per > 50){
            cout<<"GRADE: C"<<endl;
        }
        else if(per > 40){
            cout<<"GRADE: D"<<endl;
        }
        else if(per > 30){
            cout<<"GRADE: E"<<endl;
        }
        else{
            cout<<"GRADE: F"<<endl;
        }
    }

    return 0;
}